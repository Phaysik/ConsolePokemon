/*! \file pokemon.cpp
    \brief C++ file for Pokemon.
    \details Contains the function definitions for the Pokemon.
    \date 10/08/2021
    \version 1.0
    \author Matthew Moore
*/

#include "pokemon.h"
#include "moves.h"

/* Constructors and Destructors */

Pokemon::Pokemon(Stats &pokeStats, MoveAbstract *pokeMoves, Types *pokeTypes, const bool pokeDualTyping, const std::string &pokeName)
{
    this->name = pokeName;

    this->stats = pokeStats;

    this->moves = new MoveAbstract[4];

    for (us i = 0; i < 4; ++i)
        this->moves[i] = pokeMoves[i];

    this->typing = new Types[pokeDualTyping + 1];

    for (us i = 0; i < pokeDualTyping + 1; ++i)
        this->typing[i] = pokeTypes[i];

    for (us i = 0; i < TYPES_MAX; ++i)
        this->typeMatchup[i] = 1;

    setTypeMatchups(pokeDualTyping);
}

Pokemon::~Pokemon()
{
    delete[] this->typing;

    delete[] this->moves;
}

/* Getters */

std::string Pokemon::getName() const
{
    return this->name;
}

float Pokemon::getTypeMatchUp(const us type)
{
    return this->typeMatchup[type];
}

Stats *Pokemon::getStats()
{
    return &this->stats;
}

MoveAbstract *Pokemon::getMove(const us index)
{
    return &this->moves[index];
}

bool Pokemon::getBattleState() const
{
    return this->inBattle;
}

/* Setters */

void Pokemon::setTypeMatchups(const bool pokeDualTyping)
{
    for (us i = 0; i < pokeDualTyping + 1; ++i)
    {
        TypeEffective typeEffective(this->typing[i]);
        for (us j = 0; j < TYPES_MAX; ++j)
        {
            float effect = typeEffective.getMatchUp(static_cast<Types>(j));
            this->typeMatchup[j] *= effect;
        }
    }
}

void Pokemon::setBattleState(const bool pokeInBattle)
{
    this->inBattle = pokeInBattle;
    if (!this->inBattle)
        this->getStats()->resetMultipliers();
}