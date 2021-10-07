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

void Stats::setHp(us hpStat)
{
    this->hp = hpStat;
}

void Stats::setAttack(us attackStat)
{
    this->attack = attackStat;
}

void Stats::setDefense(us defenseStat)
{
    this->defense = defenseStat;
}

void Stats::setSpA(us spAStat)
{
    this->spA = spAStat;
}

void Stats::setSpD(us spDStat)
{
    this->spD = spDStat;
}

void Stats::setSpeed(us speedStat)
{
    this->speed = speedStat;
}

void Stats::setAttackMultiplier(float attackMultiplierStat)
{
    this->attackMultiplier = attackMultiplierStat;
}

void Stats::setDefenseMultiplier(float defenseMultiplierStat)
{
    this->defenseMultiplier = defenseMultiplierStat;
}

void Stats::setSpAMultiplier(float spAMultiplierStat)
{
    this->spAMultiplier = spAMultiplierStat;
}

void Stats::setSpDMultiplier(float spDMultiplierStat)
{
    this->spDMultiplier = spDMultiplierStat;
}

void Stats::setSpeedMultiplier(float speedMultiplierStat)
{
    this->speedMultiplier = speedMultiplierStat;
}

void Stats::resetMultipliers()
{
    this->attackMultiplier = 1;
    this->defenseMultiplier = 1;
    this->spAMultiplier = 1;
    this->spDMultiplier = 1;
    this->speedMultiplier = 1;
}