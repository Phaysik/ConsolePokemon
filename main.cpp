/*
 * @file main.cpp
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/20/2021
 * @brief Main 
*/

#include <iostream>
#include "stats.h"
#include "typeEnums.h"
#include "pokemon.h"

int main()
{
    Types typing[2] = {Grass, Poison};
    Stats *stats = new Stats(45, 49, 49, 65, 65, 45);
    Pokemon bulbasaur(stats, typing, true);

    delete stats;
    stats = new Stats(39, 52, 43, 60, 50, 65);
    typing[0] = Fire;
    Pokemon charmander(stats, typing, false);

    delete stats;

    return 0;
}