/*
 * @file stats.cpp
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/22/2021
 * @brief The declaration for the Stats class
*/

#include "stats.h"

Stats &Stats::operator=(const Stats &stats)
{
    this->hp = stats.hp;
    this->attack = stats.attack;
    this->defense = stats.defense;
    this->spA = stats.spA;
    this->spD = stats.spD;
    this->speed = stats.speed;
    this->attackMultiplier = stats.attackMultiplier;
    this->defenseMultiplier = stats.defenseMultiplier;
    this->spAMultiplier = stats.spAMultiplier;
    this->spDMultiplier = stats.spDMultiplier;
    this->speedMultiplier = stats.speedMultiplier;

    return *this;
}

us Stats::getHp() const
{
    return this->hp;
}

us Stats::getAttack() const
{
    return this->attack * this->attackMultiplier;
}

us Stats::getDefense() const
{
    return this->defense * this->defenseMultiplier;
}

us Stats::getSpA() const
{
    return this->spA * this->spAMultiplier;
}

us Stats::getSpD() const
{
    return this->spD * this->spDMultiplier;
}

us Stats::getSpeed() const
{
    return this->speed * this->speedMultiplier;
}

float Stats::getAttackMultiplier() const
{
    return this->attackMultiplier;
}

float Stats::getDefenseMultiplier() const
{
    return this->defenseMultiplier;
}

float Stats::getSpAMultiplier() const
{
    return this->spAMultiplier;
}

float Stats::getSpDMultiplier() const
{
    return this->spDMultiplier;
}

float Stats::getSpeedMultiplier() const
{
    return this->speedMultiplier;
}

void Stats::setHp(us hp)
{
    this->hp = hp;
}

void Stats::setAttack(us attack)
{
    this->attack = attack;
}

void Stats::setDefense(us defense)
{
    this->defense = defense;
}

void Stats::setSpA(us spA)
{
    this->spA = spA;
}

void Stats::setSpD(us spD)
{
    this->spD = spD;
}

void Stats::setSpeed(us speed)
{
    this->speed = speed;
}

void Stats::setAttackMultiplier(float attackMultiplier)
{
    this->attackMultiplier = attackMultiplier;
}

void Stats::setDefenseMultiplier(float defenseMultiplier)
{
    this->defenseMultiplier = defenseMultiplier;
}

void Stats::setSpAMultiplier(float spAMultiplier)
{
    this->spAMultiplier = spAMultiplier;
}

void Stats::setSpDMultiplier(float spDMultiplier)
{
    this->spDMultiplier = spDMultiplier;
}

void Stats::setSpeedMultiplier(float speedMultiplier)
{
    this->speedMultiplier = speedMultiplier;
}

void Stats::resetMultipliers()
{
    this->attackMultiplier = 1;
    this->defenseMultiplier = 1;
    this->spAMultiplier = 1;
    this->spDMultiplier = 1;
    this->speedMultiplier = 1;
}