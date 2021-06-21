/*
 * @file pokemon.h
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/20/2021
 * @brief The class definition for the Pokemon Class
*/

#ifndef POKEMON_H
#define POKEMON_H

#ifndef us
#define us unsigned short
#endif

#include <unordered_map>
#include <string>
#include "typeEnums.h"

// Forward declarations
class MoveAbstract;
class Stats;

class Pokemon
{
public:
    Pokemon(){};
    Pokemon(Stats *stats, MoveAbstract *moves, Types typing[], bool dualTyping, std::string name);

    ~Pokemon();

    void setTypeMatchups(bool dualTyping);

    float getTypeMatchUp(us type);

    std::string getName() const;

    MoveAbstract getMove(us index);

private:
    Stats *stats;
    MoveAbstract *moves;
    bool dualTyping;
    std::string name;
    bool inBattle;
    Types *typing;
    std::unordered_map<us, float> typeMatchup;
};

#endif