/*! \file main.cpp
    \brief Main
    \date 06/28/2021
    \version 1.0
    \author Matthew Moore
*/

#include <iostream>
#include <string>
#include "trainer.h"
#include "stats.h"
#include "moves.h"
#include "typeEnums.h"
#include "pokemon.h"

int main()
{
    Types typing[2] = {Grass, Poison};
    Stats *stats = new Stats(45, 49, 49, 65, 65, 45);
    Move movelist;
    MoveAbstract *moves;

    Trainer trainer(true);
    Trainer opponent;

    for (us i = 0; i < 5; ++i)
    {
        moves = new MoveAbstract[4];
        moves[0] = movelist.growl;
        moves[1] = movelist.tackle;
        moves[2] = movelist.headbutt;
        moves[3] = movelist.vinewhip;

        opponent.setPokemonAtIndex(new Pokemon(*stats, moves, typing, true, "bulbassaaurs" + std::to_string(static_cast<long>(i))), i);
        trainer.setPokemonAtIndex(new Pokemon(*stats, moves, typing, true, "bulbasaur" + std::to_string(static_cast<long>(i))), i);

        delete[] moves;
    }

    delete stats;
    stats = new Stats(39, 52, 43, 60, 50, 65);
    Types newTypes[1] = {Fire};
    moves = new MoveAbstract[4];
    moves[0] = movelist.ember;
    moves[1] = movelist.smokescreen;
    moves[2] = movelist.flamethrower;
    moves[3] = movelist.flareblitz;
    trainer.setPokemonAtIndex(new Pokemon(*stats, moves, newTypes, false, "charmakjhegernder"), 2);

    delete[] moves;
    delete stats;

    // TODO set up a battle simulation
    opponent.engage(&trainer, Quintuple);

    // See the effect of the move
    // for (us i = 0; i < 5; ++i)
    // {
    // Pokemon *poke = trainer.getPokemonAtIndex(i);
    // Stats *pokeStats = poke->getStats();
    // std::cout << poke->getName() << "\tDefense: ";
    // // std::cout << pokeStats->getDefense() << "\tDefense Multiplier: " << pokeStats->getDefenseMultiplier() << std::endl;
    // }

    return 0;
}