/*! \file display.h
    \brief Header file for displaying text.
    \details Contains the function declarations for displaying text.
    \date 10/26/2021
    \version 1.0
    \author Matthew Moore
*/

#pragma once

typedef unsigned short us; /*!< Shorthand for unsigned short */

#include <iostream>
#include <iomanip>
#include "pokemon.h"
#include "colors.h"
#include "typeEnums.h"

/*! \headerfile display.h
    \brief Displays text
    \details Outputs based on the state of the game
    \date 10/19/2021
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
        \date 10/19/2021
        \version 1.0
        \author Matthew Moore
    */
    void printBattleState(Pokemon **trainerEngaged, Pokemon **opponentEngaged, const BattleType type, const bool mainChar) const;

    /*! \brief Gets width information
        \details Gets the width of the pokemon's name, it width including the colors, the max width for that iteration, and it's colored name
        \pre All pointer params must be the same length
        \post The names, nameWidths, widths, and maxWidths params will all be changed
        \param trainerPoke The engaging trainer's Pokemon
        \param opponentPoke The engaged trainer's Pokemon
        \param names The colored name of the Pokemon
        \param nameWidths The width of the Pokemon's name
        \param widths The width of the colored Pokemon's name
        \param maxWidths The maximum width of the top and bottom Pokemon's name at specific iteration of loopCond param
        \param loopCond The loop terminating condition
        \param mainChar If the trainer is the main character
        \date 10/19/2021
        \version 1.0
        \author Matthew Moore
    */
    void getWidths(Pokemon **trainerPoke, Pokemon **opponentPoke, std::string *names, us *nameWidths, us *widths, us *maxWidths, const us loopCond, const bool mainChar) const;

    /*! \brief Outputs the Pokemon's colored names
        \details Outputs the Pokemon's colored names where the last character of the top and bottom names will line up
        \pre All pointer params must be the same length
        \param greaterNameWidths Check to see if there is any padding that needs to be added
        \param lowerNameWidths Check to see if there is any padding that needs to be added
        \param maxWidths The maximum width of the top and bottom Pokemon's name at specific iteration of loopCond param
        \param widths The width of the colored Pokemon's name
        \param names The colored name of the Pokemon
        \param loopCond The loop terminating condition
        \date 10/19/2021
        \version 1.0
        \author Matthew Moore
    */
    void outputNames(const us *greaterNameWidths, const us *lowerNameWidths, const us *maxWidths, const us *widths, const std::string *names, const us loopCond) const;

    /*! \brief Outputs the Pokemon's hp
        \details Outputs the Pokemon's hp where the last character of the hp and the name will line up
        \pre All pointer params must be the same length
        \param trainerPoke The engaging trainer's Pokemon
        \param opponentPoke The engaged trainer's Pokemon
        \param topNameWidth The widths of the Pokemon's name on the top of the battle
        \param botNameWidth The widths of the Pokemon's name on the bottom of the battle
        \param loopCond The loop terminating condition
        \param mainChar If the trainer is the main character
        \date 10/19/2021
        \version 1.0
        \author Matthew Moore
    */
    void outputHp(Pokemon **trainerPoke, Pokemon **opponentPoke, const us *topNameWidths, const us *botNameWidths, const us loopCond, const bool mainChar) const;

    /*! \brief Outputs the four choice
        \details Outputs the four choices the trainer can make in a battle
        \pre All pointer params must be the same length
        \param topNameWidths The widths of the Pokemon's name on the top of the battle
        \param botNameWidths The widths of the Pokemon's name on the bottom of the battle
        \param botNames The colored names of the Pokemon
        \param loopCond The loop terminating condition
        \param pokeIndex The index of the Pokemon in action
        \date 10/26/2021
        \version 1.0
        \author Matthew Moore
    */
    void displayBattleMenu(const us *topNameWidths, const us *botNameWidths, const std::string *botNames, const us loopCond, const us pokeIndex) const;

private:
    ColoredText colorText; /*!< Colors text */
};
