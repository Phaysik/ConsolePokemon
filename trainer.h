/*! \file trainer.h
    \brief Header file for the Pokemon trainer.
    \details Contains the function declarations for the Pokemon trainer.
    \date 12/18/2021
    \version 1.0
    \author Matthew Moore
*/

#pragma once

typedef unsigned short us; /*!< Shorthand for unsigned short */

#include <memory>
#include "pokemon.h"
#include "display.h"
#include "typeEnums.h"

/*! \headerfile trainer.h
    \brief The Pokemon trainer
    \details Creates the properties of a Pokemon trainer and the functions that will affect the trainer
    \date 12/18/2021
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
        \date 12/18/2021
        \version 1.0
        \author Matthew Moore
    */
    Trainer(const bool isMainCharacter = false);

    ~Trainer();

    /* Member Functions */

    /*! \brief For a Pokemon battle
        \details Start a Pokemon battle between trainers
        \pre The trainer param must already be initialized
        \post Some of the Pokemon's status may change
        \param trainer The trainer that was engaged
        \param type The #BattleType of the battle
        \date 12/18/2021
        \version 1.0
        \author Matthew Moore
    */
    void engage(Trainer &opponent, const BattleType type);

    /* Getters */

    /*! \brief Get a Pokemon from indexing
        \retval Pokemon Returns the indexed Pokemon
        \pre Requires the index param to be valid
        \param index The index of the requested Pokemon
        \date 12/18/2021
        \version 1.0
        \author Matthew Moore
    */
    const std::unique_ptr<Pokemon> &getPokemonAtIndex(const us index) const;

    /*! \brief Get all this trainer's Pokemon currently in battle
        \retval std::unique_ptr<Pokemon[]> Returns the trainer's engaged Pokemon
        \param type The #BattleType of the engagement
        \date 12/18/2021
        \version 1.0
        \author Matthew Moore
    */
    const std::unique_ptr<std::unique_ptr<Pokemon>[]> &getAllInBattle(const BattleType type);

    /*! \brief Get all this trainer's Pokemon
        \retval std::unique_ptr<Pokemon[]> Returns the trainer's Pokemon
        \date 12/18/2021
        \version 1.0
        \author Matthew Moore
    */
    const std::unique_ptr<std::unique_ptr<Pokemon>[]> &getAllPokemon() const;

    /*! \brief Get whether the trainer is the main character
        \retval bool If the trainer is the playable character
        \date 10/12/2021
        \version 1.0
        \author Matthew Moore
    */
    bool getMainCharacter() const;

    /* Setters */

    /*! \brief Sets a Pokemon to be in a certain position
        \pre The index param must be valid
        \post The #trainerPokemon roster will have changed
        \param pokemon The new Pokemon to add to the roster
        \param index The index to add the Pokemon at
        \date 12/18/2021
        \version 1.0
        \author Matthew Moore
    */
    void setPokemonAtIndex(const std::unique_ptr<Pokemon> &pokemon, const us index);

private:
    std::unique_ptr<std::unique_ptr<Pokemon>[]> trainerPokemon; /*!< The team of Pokemon the trainer is using */
    std::unique_ptr<std::unique_ptr<Pokemon>[]> inBattle;       /*!< Which Pokemon are in battle */
    bool isPlayableCharacter;                                   /*!< Is the main character */
    Display display;                                            /*!< For displaying text */
};