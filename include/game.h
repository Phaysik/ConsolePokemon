/*! \file game.h
    \brief Header file for Game.
    \details Contains the function declarations for Game information
    \date 12/23/2021
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <ncurses.h>
#include <string>
#include <constants.h>
#include <output/display.h>
#include <output/colors.h>
#include <types/typeEnums.h>
#include <trainer/pokemon/moves/moves.h>
#include <trainer/pokemon/stats/stats.h>
#include <trainer/pokemon/pokemon.h>
#include <trainer/trainer.h>

/*! \headerfile game.h
    \brief The game
    \details Creates the properties of a Game and the functions that will affect it.
    \date 12/22/2021
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

private:
    Display display;        /*!< For displaying text */
    ColoredText *colorText; /*!< For displaying text in color */
};