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
class Trainer;

class MoveAbstract
{
public:
    void effect(Trainer *trainer, Trainer *opponent);
    MoveAbstract(){};
    MoveAbstract &operator=(MoveAbstract &moves);
    MoveAbstract(Types typing, us power, us accuracy, us powerPoints, std::string moveName) : typing(typing), power(power), accuracy(accuracy), powerPoints(powerPoints), moveName(moveName) {}
    Types getType() const;
    us getPower() const;
    void setPower(us power);
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
    MoveAbstract growl = MoveAbstract(Normal, 0, 100, 40, "Growl");
    MoveAbstract tackle = MoveAbstract(Normal, 40, 100, 35, "Tackle");
    MoveAbstract headbutt = MoveAbstract(Normal, 70, 100, 15, "Headbutt");
    MoveAbstract vinewhip = MoveAbstract(Grass, 45, 100, 25, "Vinewhip");
    MoveAbstract ember = MoveAbstract(Fire, 40, 100, 20, "Ember");
    MoveAbstract smokescreen = MoveAbstract(Normal, 0, 100, 20, "Smokescreen");
    MoveAbstract flamethrower = MoveAbstract(Fire, 90, 100, 15, "Flamethrower");
    MoveAbstract flareblitz = MoveAbstract(Fire, 120, 100, 15, "Flare Blitz");
};

#endif