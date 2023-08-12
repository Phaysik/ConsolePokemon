/*! \file display.h
    \brief Header file for displaying text.
    \details Contains the function declarations for displaying text.
    \date 08/11/2023
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <ncurses.h>
#include <array>
#include <memory>

#include "constants.h"
#include "aliases.h"
#include "output/colors.h"
#include "trainer/pokemon/pokemon.h"
#include "types/typeEnums.h"

/*! \headerfile display.h
    \brief Displays text
    \details Outputs based on the state of the game
    \date 08/11/2023
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
        \param trainerEngaged[in] The engaging trainer's Pokemon
        \param opponentEngaged[in] The engaged trainer's Pokemon
        \param type[in] The #BattleType of the battle
        \param mainChar[in] If the trainer is the main character
        \param choice[in] The action choice in the battle state
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
    */
    void printBattleState(std::array<Pokemon, MAX_POKEMON> &trainerEngaged, std::array<Pokemon, MAX_POKEMON> &opponentEngaged, const BattleType type, const bool mainChar, const us action) const;

    /*! \brief Gets max widths of all engaged Pokemon
        \pre All pointer params must be the same length
        \post The maxWidths param will all be changed
        \param trainerPoke[in] The engaging trainer's Pokemon
        \param opponentPoke[in] The engaged trainer's Pokemon
        \param maxWidths[in, out] The maximum width of the top and bottom Pokemon's name at specific iteration of loopCond param
        \param loopCond[in] The loop terminating condition
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
    */
    static void getMaxPokemonWidth(std::array<Pokemon, MAX_POKEMON> &trainerPoke, std::array<Pokemon, MAX_POKEMON> &opponentPoke, std::unique_ptr<us[]> &maxWidths, const us loopCond);

    /*! \brief Outputs the Pokemon's colored names
        \details Outputs the Pokemon's colored names where the last character of the top and bottom names will line up
        \pre All pointer params must be the same length
        \param trainerPoke[in] The engaging trainer's Pokemon
        \param opponentPoke[in] The engaged trainer's Pokemon
        \param maxWidths[in] The maximum width of the top and bottom Pokemon's name at specific iteration of loopCond param
        \param loopCond[in] The loop terminating condition
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
    */
    void outputNames(std::array<Pokemon, MAX_POKEMON> &trainerPoke, std::array<Pokemon, MAX_POKEMON> &opponentPoke, std::unique_ptr<us[]> &maxWidths, const us loopCond) const;

    /*! \brief Outputs the Pokemon's hp
        \details Outputs the Pokemon's hp where the last character of the hp and the name will line up
        \pre All pointer params must be the same length
        \param trainerPoke[in] The engaging trainer's Pokemon
        \param opponentPoke[in] The engaged trainer's Pokemon
        \param loopCond[in] The loop terminating condition
        \param mainChar[in] If the trainer is the main character
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
    */
    static void outputHp(std::array<Pokemon, MAX_POKEMON> &trainerPoke, std::array<Pokemon, MAX_POKEMON> &opponentPoke, const us loopCond, const bool mainChar);

    /*! \brief Outputs the four choices
        \details Outputs the four choices the trainer can make in a battle
        \pre All pointer params must be the same length
        \param trainerPoke[in] The engaging trainer's Pokemon
        \param opponentPoke[in] The engaged trainer's Pokemon
        \param loopCond[in] The loop terminating condition
        \param pokeIndex[in] The index of the Pokemon in action
        \param choice[in] The action choice in the battle state
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
    */
    static void displayBattleMenu(std::array<Pokemon, MAX_POKEMON> &trainerPoke, std::array<Pokemon, MAX_POKEMON> &opponentPoke, const us loopCond, const us pokeIndex, const us action);

    /* Setters */

    /*! \brief Sets the display color capabilities
        \post #colorText memory will point to the params
        \param color[in] The ColoredText object to use
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
    */
    void setColorText(ColoredText &color);

private:
    ColoredText colorText; /*!< Colors text */
};
