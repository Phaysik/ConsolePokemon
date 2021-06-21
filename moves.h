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
#include <string>

// Forward declarations
class Stats;
class Pokemon;
class Trainer;

class MoveAbstract
{
public:
    void effect(Trainer *trainer, Trainer *opponent);
    MoveAbstract(){};
    void operator=(MoveAbstract *moves);
    MoveAbstract(Types typing, us power, us accuracy, us powerPoints, std::string moveName) : typing(typing), power(power), accuracy(accuracy), powerPoints(powerPoints), moveName(moveName) {}
    Types getType() const;
    us getPower() const;
    us getAccuracy() const;
    std::string getMoveName();

protected:
    Types typing;
    us power;
    us accuracy;
    us powerPoints;
    std::string moveName;
};

struct Move
{
    MoveAbstract *growl = new MoveAbstract(Normal, 0, 100, 40, "Growl");
    MoveAbstract *tackle = new MoveAbstract(Normal, 40, 100, 35, "Tackle");
    MoveAbstract *headbutt = new MoveAbstract(Normal, 70, 100, 15, "Headbutt");
    MoveAbstract *vinewhip = new MoveAbstract(Grass, 45, 100, 25, "Vinewhip");
    MoveAbstract *ember = new MoveAbstract(Fire, 40, 100, 20, "Ember");
    MoveAbstract *smokescreen = new MoveAbstract(Normal, 0, 100, 20, "Smokescreen");
    MoveAbstract *flamethrower = new MoveAbstract(Fire, 90, 100, 15, "Flamethrower");
    MoveAbstract *flareblitz = new MoveAbstract(Fire, 120, 100, 15, "Flare Blitz");
    ~Move();
};

#endif