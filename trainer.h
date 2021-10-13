/*! \file trainer.h
    \brief Header file for the Pokemon trainer.
    \details Contains the function declarations for the Pokemon trainer.
    \date 10/13/2021
    \version 1.0
    \author Matthew Moore
*/

#ifndef TRAINER_H
#define TRAINER_H

#ifndef us
#define us unsigned short /*!< Shorthand for unsigned short */
#endif

#include <iostream>
#include <iomanip>
#include "pokemon.h"
#include "typeEnums.h"
#include "colors.h"

/*! \headerfile trainer.h 
    \brief The Pokemon trainer
    \details Creates the properties of a Pokemon trainer and the functions that will affect the trainer
    \date 10/12/2021
    \version 1.0
    \author Matthew Moore
*/
class Trainer
{
public:
    /* Constructors and Destructors */

    /*! \brief Non-paremeterized constructor
        \details Will allocate #trainerPokemon and #inBattle memory
        \param isMainCharacter Whether the trainer is the main character
        \date 10/12/2021
        \version 1.0
        \author Matthew Moore
    */
    Trainer(const bool isMainCharacter = false);

    /*! \brief Delete #trainerPokemon and #inBattle allocated memory
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    ~Trainer();

    /* Member Functions */

    /*! \brief For a Pokemon battle
        \details Start a Pokemon battle between trainers
        \pre The trainer param must already be initialized
        \post Some of the Pokemon's status may change
        \param trainer The trainer that was engaged
        \param type The #BattleType of the battle
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void engage(Trainer *opponent, const BattleType type);

    /*! \brief The battle state
        \details Displays the Pokemon engaged, and also what is happening currently
        \pre The trainer param must already be initialized
        \param trainer The opposing trainer
        \param type The #BattleType of the battle
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void printBattleState(Trainer *opponent, const BattleType type);

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
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void getWidths(Pokemon **trainerPoke, Pokemon **opponentPoke, std::string *names, us *nameWidths, us *widths, us *maxWidths, us loopCond);

    /*! \brief Outputs the Pokemon's colored names
        \details Outputs the Pokemon's colored names where the last character of the top and bottom names will line up
        \pre All pointer params must be the same length
        \param greaterNameWidths Check to see if there is any padding that needs to be added
        \param lowerNameWidths Check to see if there is any padding that needs to be added
        \param maxWidths The maximum width of the top and bottom Pokemon's name at specific iteration of loopCond param
        \param widths The width of the colored Pokemon's name
        \param names The colored name of the Pokemon
        \param loopCond The loop terminating condition
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void outputNames(us *greaterNameWidths, us *lowerNameWidths, us *maxWidths, us *widths, std::string *names, us loopCond);

    /*! \brief Outputs the Pokemon's hp
        \details Outputs the Pokemon's hp where the last character of the hp and the name will line up
        \pre All pointer params must be the same length
        \param trainerPoke The engaging trainer's Pokemon
        \param opponentPoke The engaged trainer's Pokemon
        \param topNameWidth The widths of the Pokemon's name on the top of the battle
        \param botNameWidth The widths of the Pokemon's name on the bottom of the battle
        \param loopCond The loop terminating condition
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void outputHp(Pokemon **trainerPoke, Pokemon **opponentPoke, us *topNameWidths, us *botNameWidths, us loopCond);

    /* Getters */

    /*! \brief Get a Pokemon from indexing
        \retval Pokemon Returns the indexed Pokemon
        \pre Requires the index param to be valid
        \param index The index of the requested Pokemon
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    Pokemon *getPokemonAtIndex(const us index) const;

    /*! \brief Get all this trainer's Pokemon currently in battle
        \retval Pokemon Returns the trainer's engaged Pokemon
        \param type The #BattleType of the engagement
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    Pokemon **getAllInBattle(const BattleType type) const;

    /*! \brief Get all this trainer's Pokemon
        \retval Pokemon Returns the trainer's Pokemon
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    Pokemon **getAllPokemon() const;

    /*! \brief Get whether the trainer is the main character
        \retval bool If the trainer is the playable character
        \date 10/12/2021
        \version 1.0
        \author Matthew Moore
    */
    bool getMainCharacter() const;

    /*! \brief Get #colorText
        \retval ColoredText The colored text class
        \date 10/12/2021
        \version 1.0
        \author Matthew Moore
    */
    ColoredText &getColorText();

    /* Setters */

    /*! \brief Sets a Pokemon to be in a certain position
        \pre The index param must be valid
        \post The #trainerPokemon roster will have changed
        \param pokemon The new Pokemon to add to the roster
        \param index The index to add the Pokemon at
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    void setPokemonAtIndex(Pokemon *pokemon, const us index);

private:
    Pokemon **trainerPokemon; /*!< The team of Pokemon the trainer is using */
    Pokemon **inBattle;       /*!< Which Pokemon are in battle */
    ColoredText colorText;    /*!< Colors text */
    bool isPlayableCharacter; /*!< Is the main character */
};

#endif