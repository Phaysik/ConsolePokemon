/*
 * @file moves.h
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/20/2021
 * @brief The definition for the MoveAbstract and Moves class
*/

#ifndef MOVES_H
#define MOVES_H

#ifndef us
#define us unsigned short
#endif

#include "typeEnums.h"

// Forward declarations
class Stats;
class Pokemon;

class MoveAbstract
{
public:
    virtual void effect() = 0;
    MoveAbstract(Types typing, us power, us accuracy, Stats *stats, Pokemon *target) : typing(typing), power(power), accuracy(accuracy), stats(stats), target(target) {}
    Types getType() const;
    us getPower() const;
    us getAccuracy() const;

protected:
    Types typing;
    us power;
    us accuracy;
    Pokemon *target;
    Stats *stats;
    char *moveName;
};

class StatUp : public MoveAbstract
{
public:
    StatUp(Types typing, us power, us accuracy, Stats *stats, Pokemon *target) : MoveAbstract(typing, power, accuracy, stats, target) { this->stats = stats; }
    void effect();

private:
    us *statUps;
    float *statUpMultipliers;
};

class StatDown : public MoveAbstract
{
public:
    StatDown(Types typing, us power, us accuracy, Stats *stats, Pokemon *target) : MoveAbstract(typing, power, accuracy, stats, target) { this->stats = stats; }
    void effect();

private:
    us *statDowns;
    float *statDownMultipliers;
};

#endif