/*
 * @file trainer.h
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/22/2021
 * @brief The definition for the Trainer class
*/

#ifndef TRAINER_H
#define TRAINER_H

#ifndef us
#define us unsigned short
#endif

#include "pokemon.h"
#include "typeEnums.h"

class Trainer
{
public:
    Trainer();
    void setPokemonAtIndex(Pokemon *pokemon, us index);
    Pokemon *getPokemonAtIndex(us index);
    Pokemon **getAllInBattle(BattleType type);
    Pokemon **getPokemon();
    ~Trainer();
    void engage(Trainer &trainer, BattleType type);

private:
    Pokemon **trainerPokemon;
    Pokemon **inBattle;
};

#endif