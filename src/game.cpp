/*! \file game.cpp
    \brief C++ file for the Game.
    \details Contains the function definitions for Game
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#include "game.h"

/* Constructors and Destructors */

Game::Game()
{
    this->initNcurses();

    this->initOpenGL();

    this->colorText = new ColoredText();

    this->display.setColorText(this->colorText);

    this->thread = std::thread(&Game::testing, this); // Thread the testing function
}

Game::~Game()
{
    this->thread.join();

    endwin();

    delete this->colorText;
}

/* Helper functions */

void Game::testing()
{
    Types typing[2] = {Types::Grass, Types::Poison};
    Stats *stats = new Stats(45, 49, 49, 65, 65, 45);
    Move movelist;
    MoveAbstract *moves;

    Trainer trainer(&this->display, true);
    Trainer opponent(&this->display);

    for (us i = 0; i < MAX_POKEMON; ++i)
    {
        moves = new MoveAbstract[MAX_MOVES];
        moves[0] = movelist.growl;
        moves[1] = movelist.tackle;
        moves[2] = movelist.headbutt;
        moves[3] = movelist.vinewhip;

        opponent.setPokemonAtIndex(new Pokemon(*stats, moves, typing, true, "bulbassaaurs" + std::to_string(static_cast<long>(i))), i);
        trainer.setPokemonAtIndex(new Pokemon(*stats, moves, typing, true, "bulbasaur" + std::to_string(static_cast<long>(i))), i);

        delete[] moves;
    }

    delete stats;
    stats = new Stats(39, 52, 43, 60, 50, 65);
    Types newTypes[1] = {Types::Fire};
    moves = new MoveAbstract[MAX_MOVES];
    moves[0] = movelist.ember;
    moves[1] = movelist.smokescreen;
    moves[2] = movelist.flamethrower;
    moves[3] = movelist.flareblitz;
    trainer.setPokemonAtIndex(new Pokemon(*stats, moves, newTypes, false, "charmakjhegernder"), 2);

    delete[] moves;
    delete stats;

    // TODO set up a battle simulation
    opponent.engage(&trainer, BATTLETYPE);

    // See the effect of the move
    // for (us i = 0; i < 5; ++i)
    // {
    //     Pokemon *poke = trainer.getPokemonAtIndex(i);
    //     Stats *pokeStats = poke->getStats();
    //     printw("%s\tDefense: ", poke->getName().c_str());
    //     printw("%d\tDefense Multiplier: %0.2f\n", pokeStats->getDefense(), pokeStats->getDefenseMultiplier());
    // }
}

void Game::startWindow()
{
    Texture2D texture = ResourceManager::GetTexture("spritesheet");

    SubTexture2D subTexture = SubTexture2D::createFromCoords(texture, {7, 6}, {128, 128});

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        // render
        // ------
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        this->spriteRenderer->DrawSprite(subTexture, glm::vec2(0.0f, 0.0f), glm::vec2(WINDOW_WIDTH, WINDOW_HEIGHT), 0.0f);

        this->textRenderer->renderText("This is sample text", 25.0f, 25.0f, 1.0f, glm::vec3(0.5, 0.8f, 0.2f));

        glfwSwapBuffers(window);
        glFlush();
    }

    ResourceManager::Clear();

    delete this->spriteRenderer;
    delete this->textRenderer;

    glfwDestroyWindow(this->window);
    glfwTerminate();
}

void Game::initNcurses()
{
    initscr();

    curs_set(0); // No cursor

    if (has_colors() == FALSE)
    {
        endwin();
        printf("Your terminal does not support color.");
        exit(1);
    }

    start_color(); /* Start color 			*/

    if (can_change_color() == FALSE)
    {
        endwin();
        printf("Your terminal does not support color changing.");
        exit(1);
    }

    raw();                /* Line buffering disabled */
    noecho();             /* Don't echo() while we do getch */
    keypad(stdscr, TRUE); /* We get F1, F2 etc.. */
}

void Game::initOpenGL()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, false);

    this->window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Pokemon Info", nullptr, nullptr);

    if (window == NULL)
    {
        glfwTerminate();
    }

    glfwMakeContextCurrent(window); // IMPORTANT!!
    // glfwSetFramebufferSizeCallback(window, frameBufferResize);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        glfwTerminate();
    }

    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // OpenGL state
    glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // Load Shaders
    ResourceManager::LoadShader("resources/shaders/sprite.vert", "resources/shaders/sprite.frag", nullptr, "sprite");

    // configure shaders
    glm::mat4 projection = glm::ortho(0.0f, static_cast<float>(WINDOW_WIDTH), static_cast<float>(WINDOW_HEIGHT), 0.0f, -1.0f, 1.0f);
    ResourceManager::GetShader("sprite").Use().setInteger("sprite", 0);
    ResourceManager::GetShader("sprite").setMat4("projection", projection);

    // load textures
    ResourceManager::LoadTexture("resources/textures/background.jpg", false, "background");
    ResourceManager::LoadTexture("resources/textures/RPGpack_sheet_2X.png", true, "spritesheet");

    // Set renderer specific controls
    Shader spriteShader = ResourceManager::GetShader("sprite");
    this->spriteRenderer = new SpriteRenderer(spriteShader);

    this->textRenderer = new Text(WINDOW_WIDTH, WINDOW_HEIGHT);
    this->textRenderer->load(TEXTFILE, FONTSIZE);
}

void framebuffer_size_callback(GLFWwindow *window, int width, int height)
{
    // make sure the viewport matches the new window dimensions; note that width and
    // height will be significantly larger than specified on retina displays.
    glViewport(0, 0, width, height);
}