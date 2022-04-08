/*! \file game.cpp
    \brief C++ file for the Game.
    \details Contains the function definitions for Game
    \date 04/05/2022
    \version 1.0
    \author Matthew Moore
*/

#include <game.h>

/* Constructors and Destructors */

Game::Game()
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
    opponent.engage(&trainer, BattleType::Quintuple);

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
    GLFWwindow *window = this->openGL.getWindow();

    while (!glfwWindowShouldClose(window))
    {
        // UPDATE INPUT
        glfwPollEvents();

        // END DRAW
        glfwSwapBuffers(window);
        glFlush();
    }

    this->openGL.destroyWindow();
}