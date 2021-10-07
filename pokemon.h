/*
 * @file pokemon.h
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/22/2021
 * @brief The class definition for the Pokemon Class
*/

#ifndef POKEMON_H
#define POKEMON_H

#ifndef us
#define us unsigned short
#endif

#include <unordered_map>
#include <string>
#include <iostream>
#include "stats.h"
#include "moves.h"
#include "typeEnums.h"
#include "types.h"

class Pokemon
{
public:
    Pokemon(){};
    Pokemon(Stats &pokeStats, MoveAbstract *pokeMoves, Types *pokeTypes, bool pokeDualTyping, std::string pokeName);

    ~Pokemon();

    void setTypeMatchups(bool pokeDualTyping);

    float getTypeMatchUp(us type);

    std::string getName() const;

    MoveAbstract *getMove(us index);

    Stats *getStats();

    void setBattleState(bool pokeInBattle);

    bool getBattleState() const;

private:
    Stats stats;
    MoveAbstract *moves;
    bool dualTyping;
    std::string name;
    bool inBattle;
    Types *typing;
    std::unordered_map<us, float> typeMatchup;
};

#endif