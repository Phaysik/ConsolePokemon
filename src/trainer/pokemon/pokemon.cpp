/*! \file pokemon.cpp
    \brief C++ file for Pokemon.
    \details Contains the function definitions for the Pokemon.
    \date 08/11/2023
    \version 1.0
    \author Matthew Moore
*/

#include "trainer/pokemon/pokemon.h"

/* Constructors and Destructors */

Pokemon::Pokemon(Stats &pokeStats, std::array<MoveAbstract, MAX_MOVES> &pokeMoves, PokemonTypes &pokeTypes, const std::string &pokeName) : name(pokeName)
{
    this->stats = pokeStats;

    for (us i = 0; i < MAX_MOVES; ++i)
        this->moves[i] = pokeMoves[i];

    this->typing = pokeTypes;
}

/* Getters */

std::string Pokemon::getName() const
{
    return this->name;
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

const PokemonTypes &Pokemon::getTypes() const
{
    return this->typing;
}

/* Setters */

void Pokemon::setBattleState(const bool pokeInBattle)
{
    this->inBattle = pokeInBattle;
    if (!this->inBattle)
        this->getStats()->resetMultipliers();
}