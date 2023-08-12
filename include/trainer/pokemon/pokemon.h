/*! \file pokemon.h
    \brief Header file for Pokemon.
    \details Contains the function declarations for the Pokemon information.
    \date 08/11/2023
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <string>
#include <iostream>
#include <memory>
#include <array>

#include "constants.h"
#include "aliases.h"
#include "trainer/pokemon/stats/stats.h"
#include "trainer/pokemon/moves/moves.h"
#include "types/typeEnums.h"
#include "types/typeEffectiveness.h"
#include "types/pokemonTypes.h"

/*! \headerfile pokemon.h
    \brief What Pokemon can do
    \details Creates the properties of a Pokemon and the functions that will affect it
    \date 08/11/2023
    \version 1.0
    \author Matthew Moore
*/
class Pokemon
{
public:
    /* Constructors and Destructors */

    /*! \brief Default constructor
        \date 03/29/2022
        \version 1.0
        \author Matthew Moore
    */
    inline Pokemon() = default;

    /*! \brief Parameterized constructor
        \details Will initialize most member variables with the parameters
        \param pokeStats[in] The Pokemon's stats
        \param pokeMoves[in] The Pokemon's moves
        \param pokeTypes[in] The Pokemon's type(s)
        \param pokeDualTyping[in] Whether the Pokemon has two types
        \param pokeName[in] The Pokemon's name
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
    */
    Pokemon(Stats &pokeStats, std::array<MoveAbstract, MAX_MOVES> &pokeMoves, PokemonTypes &pokeTypes, std::string pokeName);

    /*! \brief Inline destructor
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
    */
    ~Pokemon(){};

    /* Overloaded Operators */

    /*! \brief Overload operator=
        \details Will allow chaining for #Pokemon class types
        \param pokemon[in] The #Pokemon and all of it's information
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
        \return #Pokemon A clone of the pokemon param
    */
    Pokemon &operator=(const Pokemon &pokemon);

    /* Getters */

    /*! \brief Get the Pokemon's name
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return string Returns the Pokemon's name
    */
    std::string getName() const;

    /*! \brief Get the Pokemon's specific move
        \pre Requires the index param to be valid
        \param index[in] The index of the move to get
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return MoveAbstract Returns the Pokemon's move at the index param
    */
    MoveAbstract *getMove(const us index);

    /*! \brief Get the Pokemon's stats
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return Stats Returns the Pokemon's stats
    */
    Stats *getStats();

    /*! \brief Get whether the Pokemon is in battle or not
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return bool Whether or not the Pokemon is in battle
    */
    bool getBattleState() const;

    /*! \brief Get the Pokemon's types
        \date 08/11/2023
        \version 1.0
        \author Matthew Moore
        \return Types The Pokemon's types
    */
    const PokemonTypes &getTypes() const;

    /* Setters */

    /*! \brief Sets whether the Pokemon is in battle or not
        \post The Pokemon's #inBattle may be changed
        \param pokeInBattle[in] If the pokemon is engaged in battle
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void setBattleState(const bool pokeInBattle);

private:
    Stats stats;                               /*!< The Pokemon's stats */
    std::array<MoveAbstract, MAX_MOVES> moves; /*!< The Pokemon's moves */
    std::string name;                          /*!< The Pokemon's name */
    bool inBattle;                             /*!< Whether the Pokemon is in battle */
    PokemonTypes typing;                       /*!< The Pokemon's type(s) */
};