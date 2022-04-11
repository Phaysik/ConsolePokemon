/*! \file stats.cpp
    \brief C++ file for Pokemon stats.
    \details Contains the function definitions for the Pokemon stats.
    \date 04/11/2021
    \version 1.0
    \author Matthew Moore
*/

#include "trainer/pokemon/stats/stats.h"

/* Overloaded Operators */

Stats &Stats::operator=(const Stats &stats)
{
    this->hp = stats.hp;
    this->maxHp = stats.maxHp;
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

/* Member Functions */

void Stats::resetMultipliers()
{
    this->attackMultiplier = 1;
    this->defenseMultiplier = 1;
    this->spAMultiplier = 1;
    this->spDMultiplier = 1;
    this->speedMultiplier = 1;
}

/* Getters */

us Stats::getHp() const
{
    return this->hp;
}

us Stats::getMaxHp() const
{
    return this->maxHp;
}

us Stats::getAttack() const
{
    return static_cast<us>(this->attack * this->attackMultiplier);
}

us Stats::getDefense() const
{
    return static_cast<us>(this->defense * this->defenseMultiplier);
}

us Stats::getSpA() const
{
    return static_cast<us>(this->spA * this->spAMultiplier);
}

us Stats::getSpD() const
{
    return static_cast<us>(this->spD * this->spDMultiplier);
}

us Stats::getSpeed() const
{
    return static_cast<us>(this->speed * this->speedMultiplier);
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

/* Setters */

void Stats::setHp(const us hpStat)
{
    this->hp = hpStat;
}

void Stats::setMaxHp(const us hpStat)
{
    this->maxHp = hpStat;
}

void Stats::setAttack(const us attackStat)
{
    this->attack = attackStat;
}

void Stats::setDefense(const us defenseStat)
{
    this->defense = defenseStat;
}

void Stats::setSpA(const us spAStat)
{
    this->spA = spAStat;
}

void Stats::setSpD(const us spDStat)
{
    this->spD = spDStat;
}

void Stats::setSpeed(const us speedStat)
{
    this->speed = speedStat;
}

void Stats::setAttackMultiplier(const float attackMultiplierStat)
{
    this->attackMultiplier = attackMultiplierStat;
}

void Stats::setDefenseMultiplier(const float defenseMultiplierStat)
{
    this->defenseMultiplier = defenseMultiplierStat;
}

void Stats::setSpAMultiplier(const float spAMultiplierStat)
{
    this->spAMultiplier = spAMultiplierStat;
}

void Stats::setSpDMultiplier(const float spDMultiplierStat)
{
    this->spDMultiplier = spDMultiplierStat;
}

void Stats::setSpeedMultiplier(const float speedMultiplierStat)
{
    this->speedMultiplier = speedMultiplierStat;
}