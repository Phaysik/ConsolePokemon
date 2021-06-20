/*
 * @file moves.cpp
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/20/2021
 * @brief The declaration for the MoveAbstract and Moves class
*/

#include "moves.h"
#include "stats.h"
#include "pokemon.h"

Types MoveAbstract::getType() const
{
    return this->typing;
}

us MoveAbstract::getPower() const
{
    return this->power;
}

us MoveAbstract::getAccuracy() const
{
    return this->power;
}

void StatUp::effect()
{
}

void StatDown::effect()
{
}