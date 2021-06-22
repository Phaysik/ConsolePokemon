/*
 * @file moves.cpp
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/22/2021
 * @brief The declaration for the MoveAbstract and Moves class
*/

#include "moves.h"
#include "trainer.h"

Types MoveAbstract::getType() const
{
    return this->typing;
}

us MoveAbstract::getPower() const
{
    return this->power;
}

void MoveAbstract::setPower(us power)
{
    this->power = power;
}

us MoveAbstract::getAccuracy() const
{
    return this->power;
}

std::string MoveAbstract::getMoveName()
{
    return this->moveName;
}

MoveAbstract &MoveAbstract::operator=(MoveAbstract &moves)
{
    this->typing = moves.typing;
    this->power = moves.power;
    this->accuracy = moves.accuracy;
    this->powerPoints = moves.powerPoints;
    this->moveName = moves.moveName;

    return *this;
}

void MoveAbstract::effect(Pokemon **trainer, Pokemon **opponent, us userIndex, BattleType type)
{
    if (this->moveName == "Growl")
    {
        if (userIndex > 0)
            opponent[userIndex - 1]->getStats()->setDefenseMultiplier(0.5);
        if (userIndex < type)
            opponent[userIndex + 1]->getStats()->setDefenseMultiplier(0.5);
        opponent[userIndex]->getStats()->setDefenseMultiplier(0.5);
    }
}