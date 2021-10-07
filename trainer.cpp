/*
 * @file trainer.cpp
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/22/2021
 * @brief The declaration for the Trainer class
*/

#include "trainer.h"

Trainer::Trainer()
{
    this->trainerPokemon = new Pokemon *[5];
    this->inBattle = new Pokemon *[5];

    for (us i = 0; i < 5; ++i)
    {
        this->trainerPokemon[i] = nullptr;
        this->inBattle[i] = nullptr;
    }
}

void Trainer::setPokemonAtIndex(Pokemon *pokemon, us index)
{
    if (this->trainerPokemon[index] != nullptr)
        delete this->trainerPokemon[index];

    this->trainerPokemon[index] = pokemon;
}

Pokemon *Trainer::getPokemonAtIndex(us index)
{
    return this->trainerPokemon[index];
}

Trainer::~Trainer()
{
    for (us i = 0; i < 5; ++i)
        delete this->trainerPokemon[i];

    delete[] this->inBattle;
    delete[] this->trainerPokemon;
}

void Trainer::engage(Trainer &trainer, BattleType type)
{
    //TODO this should all be in a loop until one sides Pokemon are all out
    for (us i = 0; i < type + 1; ++i)
    {
        this->trainerPokemon[i]->setBattleState(true);
        trainer.trainerPokemon[i]->setBattleState(true);
    }
    this->trainerPokemon[2]->getMove(0)->effect(this->getPokemon(), trainer.getAllInBattle(type), 2, type);

    for (us i = 0; i < type + 1; ++i)
    {
        this->trainerPokemon[i]->setBattleState(false);
        trainer.trainerPokemon[i]->setBattleState(false);
    }
}

Pokemon **Trainer::getPokemon()
{
    return this->trainerPokemon;
}

Pokemon **Trainer::getAllInBattle(BattleType type)
{
    us arrIndex = 0;
    for (us i = 0; i < type + 1; ++i)
        if (this->trainerPokemon[i]->getBattleState())
            this->inBattle[arrIndex++] = this->trainerPokemon[i];

    return this->inBattle;
}