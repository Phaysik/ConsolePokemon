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

#include <vector>
#include <unordered_map>
#include "typeEnums.h"

// Forward declarations
#include "moves.h"
class Stats;

class Pokemon
{
public:
    Pokemon();
    Pokemon(Stats *stats, Types typing[], bool dualTyping);

    ~Pokemon();

    void setTypeMatchups(bool dualTyping);

    float getTypeMatchUp(us type);

private:
    Stats *stats;
    bool dualTyping;
    Types *typing;
    std::unordered_map<us, float> typeMatchup;
};

#endif