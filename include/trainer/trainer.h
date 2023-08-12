/*! \file trainer.h
    \brief Header file for the Pokemon trainer.
    \details Contains the function declarations for the Pokemon trainer.
    \date 08/11/2023
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include "constants.h"
#include "aliases.h"
#include "output/display.h"
#include "trainer/pokemon/pokemon.h"
#include "types/typeEnums.h"

/*! \headerfile trainer.h
    \brief The Pokemon trainer
    \details Creates the properties of a Pokemon trainer and the functions that will affect the trainer
    \date 04/12/2022
    \version 1.0
    \author Matthew Moore
*/
class Trainer
{
public:
    /* Constructors and Destructors */

    /*! \brief Non-paremeterized constructor
        \details Will allocate #trainerPokemon and #inBattle memory
        \param disp[in] The display object used for output
        \param isMainCharacter[in] Whether the trainer is the main character
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
    */
    Trainer(Display &disp, const bool isMainCharacter = false) : isPlayableCharacter(isMainCharacter), display(disp){};

    /*! \brief Inline destructor
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
    */
    ~Trainer(){};

    /* Member Functions */

    /*! \brief For a Pokemon battle
        \details Start a Pokemon battle between trainers
        \pre The trainer param must already be initialized
        \post Some of the Pokemon's status may change
        \param trainer[in] The trainer that was engaged
        \param type[in] The #BattleType of the battle
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void engage(Trainer *opponent, const BattleType type);

    /* Getters */

    /*! \brief Get a Pokemon from indexing
        \pre Requires the index param to be valid
        \param index[in] The index of the requested Pokemon
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
        \return Pokemon Returns the indexed Pokemon
    */
    Pokemon &getPokemonAtIndex(const us index);

    /*! \brief Get all this trainer's Pokemon currently in battle
        \param type[in] The #BattleType of the engagement
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
        \return Pokemon Returns the trainer's engaged Pokemon
    */
    std::array<Pokemon, MAX_POKEMON> &getAllInBattle(const BattleType type);

    /*! \brief Get all this trainer's Pokemon
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
        \return Pokemon Returns the trainer's Pokemon
    */
    std::array<Pokemon, MAX_POKEMON> &getAllPokemon();

    /*! \brief Get whether the trainer is the main character
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return bool If the trainer is the playable character
    */
    bool getMainCharacter() const;

    /* Setters */

    /*! \brief Sets a Pokemon to be in a certain position
        \pre The index param must be valid
        \post The #trainerPokemon roster will have changed
        \param pokemon[in] The new Pokemon to add to the roster
        \param index[in] The index to add the Pokemon at
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
    */
    void setPokemonAtIndex(Pokemon &pokemon, const us index);

private:
    std::array<Pokemon, MAX_POKEMON> trainerPokemon; /*!< The team of Pokemon the trainer is using */
    std::array<Pokemon, MAX_POKEMON> inBattle;       /*!< Which Pokemon are in battle */
    bool isPlayableCharacter;                        /*!< Is the main character */
    Display display;                                 /*!< For displaying text */
};