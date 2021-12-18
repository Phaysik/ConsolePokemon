/*! \file pokemon.cpp
    \brief C++ file for Pokemon.
    \details Contains the function definitions for the Pokemon.
    \date 12/18/2021
    \version 1.0
    \author Matthew Moore
*/

#include "pokemon.h"
#include "moves.h"

/* Constructors and Destructors */

Pokemon::Pokemon(std::unique_ptr<Stats> &pokeStats, std::unique_ptr<MoveAbstract[]> &pokeMoves, Types *pokeTypes, const bool pokeDualTyping, const std::string &pokeName)
{
    this->name = pokeName;

    this->stats = pokeStats;

    this->moves = std::make_unique<MoveAbstract[]>(4);

    this->dualTyping = pokeDualTyping;

    for (us i = 0; i < 4; ++i)
        this->moves[i] = pokeMoves[i];

    this->typing = std::make_unique<Types[]>(static_cast<unsigned long>(pokeDualTyping) + 1);

    for (us i = 0; i < pokeDualTyping + 1; ++i)
        this->typing[i] = pokeTypes[i];

    for (us i = 0; i < TYPES_MAX; ++i)
        this->typeMatchup[i] = 1;

    setTypeMatchups(pokeDualTyping);
}

Pokemon::Pokemon(const Pokemon &poke)
{
    this->name = poke.name;

    this->stats = poke.stats;

    this->moves = std::make_unique<MoveAbstract[]>(4);

    this->dualTyping = poke.dualTyping;

    for (us i = 0; i < 4; ++i)
        this->moves[i] = poke.moves[i];

    this->typing = std::make_unique<Types[]>(static_cast<unsigned long>(poke.dualTyping) + 1);

    for (us i = 0; i < poke.dualTyping + 1; ++i)
        this->typing[i] = poke.typing[i];

    for (us i = 0; i < TYPES_MAX; ++i)
        this->typeMatchup[i] = 1;

    setTypeMatchups(poke.dualTyping);
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

MoveAbstract *Pokemon::getMove(const us index)
{
    return &this->moves[index];
}

Stats *Pokemon::getStats()
{
    return &this->stats;
}

bool Pokemon::getBattleState() const
{
    return this->inBattle;
}

const std::unique_ptr<Types[]> &Pokemon::getTypes() const
{
    return this->typing;
}

bool Pokemon::getDualTyping() const
{
    return this->dualTyping;
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