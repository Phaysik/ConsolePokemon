/*! \file pokemon.h
    \brief Header file for Pokemon.
    \details Contains the function declarations for the Pokemon information.
    \date 04/12/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <cstdint>
#include <unordered_map>
#include <string>
#include <iostream>

#include "constants.h"
#include "trainer/pokemon/stats/stats.h"
#include "trainer/pokemon/moves/moves.h"
#include "types/typeEnums.h"
#include "types/types.h"

using us = uint16_t; /*!< Shorthand for unsigned short */

class MoveAbstract;

/*! \headerfile pokemon.h
    \brief What Pokemon can do
    \details Creates the properties of a Pokemon and the functions that will affect it
    \date 04/12/2022
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
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    Pokemon(Stats &pokeStats, MoveAbstract *pokeMoves, Types *pokeTypes, const bool pokeDualTyping, const std::string &pokeName);

    /*! \brief Delete #moves and #typing allocated memory
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    ~Pokemon();

    /* Getters */

    /*! \brief Get the Pokemon's type matchup
        \pre Requires the type param to be valid
        \param type[in] The type to get the matchup for
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return float Returns the Pokemon's effectiveness against the type param
    */
    float getTypeMatchUp(const us type);

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
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return Types The Pokemon's types
    */
    Types *getTypes() const;

    /*! \brief Get if the Pokemon has dual types
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return bool Whether the Pokemon has dual types
    */
    bool getDualTyping() const;

    /* Setters */

    /*! \brief Sets the Pokemon's type matchups
        \post The Pokemon's #typeMatchup will be set initialized
        \param pokeDualTyping[in] If the pokemon has two types
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void setTypeMatchups(const bool pokeDualTyping);

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
    MoveAbstract *moves;                       /*!< The Pokemon's moves */
    bool dualTyping;                           /*!< Whether the Pokemon has two types */
    std::string name;                          /*!< The Pokemon's name */
    bool inBattle;                             /*!< Whether the Pokemon is in battle */
    Types *typing;                             /*!< The Pokemon's type(s) */
    std::unordered_map<us, float> typeMatchup; /*!< The Pokemon's type matchup */
};