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

void MoveAbstract::setPower(const us movePower)
{
    this->power = movePower;
}

us MoveAbstract::getAccuracy() const
{
    return this->power;
}

std::string MoveAbstract::getMoveName() const
{
    return this->name;
}

MoveAbstract &MoveAbstract::operator=(MoveAbstract &moves)
{
    this->typing = moves.typing;
    this->power = moves.power;
    this->accuracy = moves.accuracy;
    this->powerPoints = moves.powerPoints;
    this->name = moves.name;

    return *this;
}

void MoveAbstract::effect(Pokemon **trainer, Pokemon **opponent, us userIndex, BattleType type)
{
    if (this->name == "Growl")
    {
        if (userIndex > 0)
            opponent[userIndex - 1]->getStats()->setDefenseMultiplier(0.5);
        if (userIndex < type)
            opponent[userIndex + 1]->getStats()->setDefenseMultiplier(0.5);
        opponent[userIndex]->getStats()->setDefenseMultiplier(0.5);
    }
    else if (this->name == "Swords Dance")
        trainer[userIndex]->getStats()->setAttackMultiplier(2);
}