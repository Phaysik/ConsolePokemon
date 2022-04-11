/*! \file display.h
    \brief Header file for displaying text.
    \details Contains the function declarations for displaying text.
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <ncurses.h>
#include <cstdint>

#include "output/colors.h"
#include "trainer/pokemon/pokemon.h"
#include "types/typeEnums.h"

using us = uint16_t; /*!< Shorthand for unsigned short */

class Pokemon;
class ColoredText;

/*! \headerfile display.h
    \brief Displays text
    \details Outputs based on the state of the game
    \date 03/29/2022
    \version 1.0
    \author Matthew Moore
*/
class Display
{
public:
    /* Member Functions */

    /*! \brief The battle state
        \details Displays the Pokemon engaged, and also what is happening currently
        \pre The trainer param must already be initialized
        \param trainerEngaged The engaging trainer's Pokemon
        \param opponentEngaged The engaged trainer's Pokemon
        \param type The #BattleType of the battle
        \param mainChar If the trainer is the main character
        \param choice The action choice in the battle state
        \date 03/29/2022
        \version 1.0
        \author Matthew Moore
    */
    void printBattleState(Pokemon **trainerEngaged, Pokemon **opponentEngaged, const BattleType type, const bool mainChar, const us choice) const;

    /*! \brief Gets max widths of all engaged Pokemon
        \pre All pointer params must be the same length
        \post The maxWidths param will all be changed
        \param trainerPoke The engaging trainer's Pokemon
        \param opponentPoke The engaged trainer's Pokemon
        \param maxWidths The maximum width of the top and bottom Pokemon's name at specific iteration of loopCond param
        \param loopCond The loop terminating condition
        \date 12/22/2021
        \version 1.0
        \author Matthew Moore
    */
    void getMaxPokemonWidth(Pokemon **trainerPoke, Pokemon **opponentPoke, us *maxWidths, const us loopCond) const;

    /*! \brief Outputs the Pokemon's colored names
        \details Outputs the Pokemon's colored names where the last character of the top and bottom names will line up
        \pre All pointer params must be the same length
        \param trainerPoke The engaging trainer's Pokemon
        \param opponentPoke The engaged trainer's Pokemon
        \param maxWidths The maximum width of the top and bottom Pokemon's name at specific iteration of loopCond param
        \param loopCond The loop terminating condition
        \date 12/22/2021
        \version 1.0
        \author Matthew Moore
    */
    void outputNames(Pokemon **trainerPoke, Pokemon **opponentPoke, const us *maxWidths, const us loopCond) const;

    /*! \brief Outputs the Pokemon's hp
        \details Outputs the Pokemon's hp where the last character of the hp and the name will line up
        \pre All pointer params must be the same length
        \param trainerPoke The engaging trainer's Pokemon
        \param opponentPoke The engaged trainer's Pokemon
        \param loopCond The loop terminating condition
        \param mainChar If the trainer is the main character
        \date 12/22/2021
        \version 1.0
        \author Matthew Moore
    */
    void outputHp(Pokemon **trainerPoke, Pokemon **opponentPoke, const us loopCond, const bool mainChar) const;

    /*! \brief Outputs the four choices
        \details Outputs the four choices the trainer can make in a battle
        \pre All pointer params must be the same length
        \param trainerPoke The engaging trainer's Pokemon
        \param opponentPoke The engaged trainer's Pokemon
        \param loopCond The loop terminating condition
        \param pokeIndex The index of the Pokemon in action
        \param choice The action choice in the battle state
        \date 03/29/2022
        \version 1.0
        \author Matthew Moore
    */
    void displayBattleMenu(Pokemon **trainerPoke, Pokemon **opponentPoke, const us loopCond, const us pokeIndex, const us choice) const;

    /* Setters */

    /*! \brief Sets the display color capabilities
        \post #colorText memory will point to the params
        \param color The ColoredText object to use
        \date 12/23/2021
        \version 1.0
        \author Matthew Moore
    */
    void setColorText(ColoredText *color);

private:
    ColoredText *colorText; /*!< Colors text */
};
