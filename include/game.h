/*! \file game.h
    \brief Header file for Game.
    \details Contains the function declarations for Game information
    \date 04/08/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <thread>
#include <ncurses.h>
#include <string>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "constants.h"
#include "window.h"
#include "output/display.h"
#include "output/colors.h"
#include "trainer/trainer.h"
#include "trainer/pokemon/pokemon.h"
#include "trainer/pokemon/stats/stats.h"
#include "trainer/pokemon/moves/moves.h"
#include "types/typeEnums.h"

/*! \headerfile game.h
    \brief The game
    \details Creates the properties of a Game and the functions that will affect it.
    \date 04/08/2022
    \version 1.0
    \author Matthew Moore
*/
class Game
{
public:
    /* Constructors and Destructors */

    /*! \brief Construct ncurses window and keyboard functionality
        \date 12/22/2021
        \version 1.0
        \author Matthew Moore
    */
    Game();

    /*! \brief Deallocate ncurses window
        \date 12/21/2021
        \version 1.0
        \author Matthew Moore
    */
    ~Game();

    /* Helper functions */

    /*! \brief For testing functionality
        \date 12/22/2021
        \version 1.0
        \author Matthew Moore
    */
    void testing();

    void startWindow();

private:
    Display display;        /*!< For displaying text */
    ColoredText *colorText; /*!< For displaying text in color */
    std::thread thread;     /*!< For threading the console portion of the application */
    GLInfo openGL;          /*!< For handling OpenGL info */
};