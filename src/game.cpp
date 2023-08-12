/*! \file game.cpp
    \brief C++ file for the Game.
    \details Contains the function definitions for Game
    \date 08/11/2023
    \version 1.0
    \author Matthew Moore
*/

#include "game.h"

/* Constructors and Destructors */

Game::Game()
{
    Game::initNcurses();

    this->initOpenGL();

    this->colorText = ColoredText();

    this->display.setColorText(this->colorText);

    this->thread = std::thread(&Game::testing, this); // Thread the testing function
}

Game::~Game()
{
    this->thread.join();

    endwin();
}

/* Member functions */

void Game::testing()
{
    PokemonTypes typing = PokemonTypes(Types::Grass, Types::Poison);
    Stats stats = Stats(45, 49, 49, 65, 65, 45);
    Move movelist;
    std::array<MoveAbstract, MAX_MOVES> moves;
    moves[0] = movelist.growl;
    moves[1] = movelist.tackle;
    moves[2] = movelist.headbutt;
    moves[3] = movelist.vinewhip;

    Trainer trainer(this->display, true);
    Trainer opponent(this->display);

    for (us i = 0; i < MAX_POKEMON; ++i)
    {
        Pokemon opponentPokemon = Pokemon(stats, moves, typing, "bulbassaaurs" + std::to_string(static_cast<sl>(i)));
        Pokemon trainerPokemon = Pokemon(stats, moves, typing, "bulbasaur" + std::to_string(static_cast<sl>(i)));

        opponent.setPokemonAtIndex(opponentPokemon, i);
        trainer.setPokemonAtIndex(trainerPokemon, i);
    }

    stats = Stats(39, 52, 43, 60, 50, 65);
    PokemonTypes newTypes = PokemonTypes(Types::Fire);
    moves[0] = movelist.ember;
    moves[1] = movelist.smokescreen;
    moves[2] = movelist.flamethrower;
    moves[3] = movelist.flareblitz;
    Pokemon replaceTrainerPokemon = Pokemon(stats, moves, newTypes, "charmakjhegernder");
    trainer.setPokemonAtIndex(replaceTrainerPokemon, 2);

    // TODO(phaysik) set up a battle simulation
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
    Texture2D texture = ResourceManager::getTexture("spritesheet");

    SubTexture2D subTexture = SubTexture2D::createFromCoords(texture, {10, 2}, {128, 128}, {1, 2});

    while (glfwWindowShouldClose(window) == GL_FALSE)
    {
        glfwPollEvents();

        // render
        // ------
        glClearColor(0.0F, 0.0F, 0.0F, 1.0F);
        glClear(GL_COLOR_BUFFER_BIT);

        this->spriteRenderer->DrawSprite(subTexture, glm::vec2(0.0F, 0.0F), glm::vec2(WINDOW_WIDTH, WINDOW_HEIGHT));

        this->textRenderer->renderText("This is sample text", 25.0F, 25.0F, 1.0F, glm::vec3(0.5, 0.8F, 0.2F));

        glfwSwapBuffers(window);
        glFlush();
    }

    ResourceManager::clear();

    this->spriteRenderer.reset(nullptr);
    this->textRenderer.reset(nullptr);

    glfwDestroyWindow(this->window);
    glfwTerminate();
}

void Game::initNcurses()
{
    initscr();

    curs_set(0); // No cursor

    if (!has_colors())
    {
        endwin();
        std::cout << "Your terminal does not support color." << std::endl;
        exit(1);
    }

    start_color(); /* Start color 			*/

    if (!can_change_color())
    {
        endwin();
        std::cout << "Your terminal does not support color changing." << std::endl;
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
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

    this->window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Pokemon Info", nullptr, nullptr);

    if (window == nullptr)
    {
        glfwTerminate();
    }

    glfwMakeContextCurrent(window); // IMPORTANT!!
    // glfwSetFramebufferSizeCallback(window, frameBufferResize);

    if (gladLoadGLLoader(reinterpret_cast<GLADloadproc>(glfwGetProcAddress)) == GL_FALSE)
    {
        glfwTerminate();
    }

    glfwSetFramebufferSizeCallback(window, frameBufferResize);

    // OpenGL state
    glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // Load Shaders
    ResourceManager::loadShader("resources/shaders/sprite.vert", "resources/shaders/sprite.frag", nullptr, "sprite");

    // configure shaders
    glm::mat4 projection = glm::ortho(0.0F, static_cast<float>(WINDOW_WIDTH), static_cast<float>(WINDOW_HEIGHT), 0.0F, -1.0F, 1.0F);
    ResourceManager::getShader("sprite").Use().setInteger("sprite", 0);
    ResourceManager::getShader("sprite").setMat4("projection", projection);

    // load textures
    ResourceManager::loadTexture("resources/textures/background.jpg", false, "background");
    ResourceManager::loadTexture("resources/textures/RPGpack_sheet_2X.png", true, "spritesheet");

    // Set renderer specific controls
    Shader spriteShader = ResourceManager::getShader("sprite");
    this->spriteRenderer = std::make_unique<SpriteRenderer>(SpriteRenderer(spriteShader));

    this->textRenderer = std::make_unique<Text>(Text(WINDOW_WIDTH, WINDOW_HEIGHT));
    this->textRenderer->load(TEXTFILE, FONTSIZE);
}

void frameBufferResize(GLFWwindow *window, int width, int height)
{
    if (window != nullptr)
    {
    }

    // make sure the viewport matches the new window dimensions; note that width and
    // height will be significantly larger than specified on retina displays.
    glViewport(0, 0, width, height);
}