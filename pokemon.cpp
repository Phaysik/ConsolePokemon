/*
 * @file pokemon.cpp
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/22/2021
 * @brief The declaration for the Pokemon class
*/

#include "pokemon.h"
#include "moves.h"

Pokemon::Pokemon(Stats &pokeStats, MoveAbstract *pokeMoves, Types *pokeTypes, bool pokeDualTyping, std::string pokeName)
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

void Pokemon::setTypeMatchups(bool pokeDualTyping)
{
    for (us i = 0; i < pokeDualTyping + 1; ++i)
    {
        TypeEffective typeEffective(this->typing[i]);
        for (us j = 0; j < TYPES_MAX; ++j)
        {
            float effect = typeEffective.getMatchUp(j);
            this->typeMatchup[j] *= effect;
        }
    }
}

std::string Pokemon::getName() const
{
    return this->name;
}

Pokemon::~Pokemon()
{
    delete[] this->typing;

    delete[] this->moves;
}

float Pokemon::getTypeMatchUp(us type)
{
    return this->typeMatchup[type];
}

Stats *Pokemon::getStats()
{
    return &this->stats;
}

MoveAbstract *Pokemon::getMove(us index)
{
    return &this->moves[index];
}

void Pokemon::setBattleState(bool pokeInBattle)
{
    this->inBattle = pokeInBattle;
    if (!this->inBattle)
        this->getStats()->resetMultipliers();
}

bool Pokemon::getBattleState() const
{
    return this->inBattle;
}