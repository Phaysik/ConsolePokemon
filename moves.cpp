/*! \file moves.cpp
    \brief C++ file for Pokemon moves.
    \details Contains the function definitions for the Pokemon moves.
    \date 10/08/2021
    \version 1.0
    \author Matthew Moore
*/

#include "moves.h"
#include "trainer.h"

/* Constructers and Desctructors */

/* Overloaded Operators */

MoveAbstract &MoveAbstract::operator=(MoveAbstract &moves)
{
    this->typing = moves.typing;
    this->power = moves.power;
    this->accuracy = moves.accuracy;
    this->powerPoints = moves.powerPoints;
    this->name = moves.name;

    return *this;
}

/* Member Functions */

void MoveAbstract::effect(Pokemon **trainer, Pokemon **opponent, const us userIndex, const BattleType type) const
{
    if (this->name == "Growl")
    {
        // Growl will affect the pokemon in front of it, and also to the left and right if possible
        if (userIndex > 0)
            opponent[userIndex - 1]->getStats()->setDefenseMultiplier(0.5);
        if (userIndex < type)
            opponent[userIndex + 1]->getStats()->setDefenseMultiplier(0.5);
        opponent[userIndex]->getStats()->setDefenseMultiplier(0.5);
    }
    else if (this->name == "Swords Dance")
        trainer[userIndex]->getStats()->setAttackMultiplier(2);
}

/* Getters */

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

std::string MoveAbstract::getMoveName() const
{
    return this->name;
}

/* Setters */

void MoveAbstract::setPower(const us movePower)
{
    this->power = movePower;
}