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
#include "trainer.h"

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

std::string MoveAbstract::getMoveName()
{
    return this->moveName;
}

void MoveAbstract::operator=(MoveAbstract *moves)
{
    this->typing = moves->typing;
    this->power = moves->power;
    this->accuracy = moves->accuracy;
    this->powerPoints = moves->powerPoints;
    this->moveName = moves->moveName;
}

Move::~Move()
{
    delete this->growl;
    delete this->tackle;
    delete this->headbutt;
    delete this->vinewhip;
    delete this->ember;
    delete this->smokescreen;
    delete this->flamethrower;
    delete this->flareblitz;
}

MoveAbstract Pokemon::getMove(us index)
{
    return this->moves[index];
}

void MoveAbstract::effect(Trainer *trainer, Trainer *opponent)
{
    //TODO check only opponents pokemon in battle, access to all trainer's pokemon is permitted
    if (this->moveName == "growl")
    {
    }
}