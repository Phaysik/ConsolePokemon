/*! \file pokemon.h
    \brief Header file for Pokemon.
    \details Contains the function declarations for the Pokemon information.
    \date 10/12/2021
    \version 1.0
    \author Matthew Moore
*/

#ifndef POKEMON_H
#define POKEMON_H

#ifndef us
#define us unsigned short /*!< Shorthand for unsigned short */
#endif

#include <unordered_map>
#include <string>
#include <iostream>
#include "stats.h"
#include "moves.h"
#include "typeEnums.h"
#include "types.h"

/*! \headerfile pokemon.h 
    \brief What Pokemon can do
    \details Creates the properties of a Pokemon and the functions that will affect it
    \date 10/12/2021
    \version 1.0
    \author Matthew Moore
*/
class Pokemon
{
public:
    /* Constructors and Destructors */

    /*! \brief Empty constructor
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore 
    */
    inline Pokemon(){};

    /*! \brief Parameterized constructor
        \details Will initialize most member variables with the parameters
        \param pokeStats The Pokemon's stats
        \param pokeMoves The Pokemon's moves
        \param pokeTypes The Pokemon's type(s)
        \param pokeDualTyping Whether the Pokemon has two types
        \param pokeName The Pokemon's name
        \date 10/08/2021
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
        \retval float Returns the Pokemon's effectiveness against the type param
        \pre Requires the type param to be valid
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    float getTypeMatchUp(const us type);

    /*! \brief Get the Pokemon's name
        \retval string Returns the Pokemon's name
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    std::string getName() const;

    /*! \brief Get the Pokemon's specific move
        \retval MoveAbstract Returns the Pokemon's move at the index param
        \pre Requires the index param to be valid
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    MoveAbstract *getMove(const us index);

    /*! \brief Get the Pokemon's stats
        \retval Stats Returns the Pokemon's stats
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    Stats *getStats();

    /*! \brief Get whether the Pokemon is in battle or not
        \retval bool Whether or not the Pokemon is in battle
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    bool getBattleState() const;

    /*! \brief Get the Pokemon's types
        \retval #Types The Pokemon's types
        \date 10/12/2021
        \version 1.0
        \author Matthew Moore
    */
    Types *getTypes() const;

    /*! \brief Get if the Pokemon has dual types
        \retval bool Whether the Pokemon has dual types
        \date 10/12/2021
        \version 1.0
        \author Matthew Moore
    */
    bool getDualTyping() const;

    /* Setters */

    /*! \brief Sets the Pokemon's type matchups
        \post The Pokemon's #typeMatchup will be set initialized
        \param pokeDualTyping If the pokemon has two types
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    void setTypeMatchups(const bool pokeDualTyping);

    /*! \brief Sets whether the Pokemon is in battle or not
        \post The Pokemon's #inBattle may be changed
        \param pokeInBattle If the pokemon is engaged in battle
        \date 10/08/2021
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

#endif