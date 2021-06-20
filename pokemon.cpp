/*
 * @file pokemon.cpp
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/20/2021
 * @brief The declaration for the Pokemon class
*/

#include "pokemon.h"
#include "types.h"

Pokemon::Pokemon(Stats *stats, Types typing[], bool dualTyping)
{
    this->stats = stats;

    this->typing = new Types[dualTyping + 1];

    for (us i = 0; i < dualTyping + 1; ++i)
        this->typing[i] = typing[i];

    for (us i = 0; i < TYPES_MAX; ++i)
        this->typeMatchup[i] = 1;

    setTypeMatchups(dualTyping);

    MoveAbstract **moves = new MoveAbstract *[2];
    moves[0] = new StatUp(Fire, 20, 30, stats, this);
    moves[1] = new StatDown(Water, 30, 30, stats, this);

    delete moves[0];
    delete moves[1];
    delete[] moves;
}

void Pokemon::setTypeMatchups(bool dualTyping)
{
    for (us i = 0; i < dualTyping + 1; ++i)
    {
        TypeEffective typeEffective(this->typing[i]);
        for (us j = 0; j < TYPES_MAX; ++j)
        {
            float effect = typeEffective.getMatchUp(j);
            this->typeMatchup[j] *= effect;
        }
    }
}

Pokemon::~Pokemon()
{
    delete[] this->typing;
}

float Pokemon::getTypeMatchUp(us type)
{
    return this->typeMatchup[type];
}