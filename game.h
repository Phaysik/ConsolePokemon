/*! \file game.h
    \brief Header file for Game.
    \details Contains the function declarations for Game information
    \date 12/22/2021
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <ncurses.h>
#include <string>
#include "trainer.h"
#include "stats.h"
#include "moves.h"
#include "typeEnums.h"
#include "pokemon.h"

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
};