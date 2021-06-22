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
    this->pokemon = new Pokemon *[5];
    this->inBattle = new Pokemon *[5];

    for (us i = 0; i < 5; ++i)
    {
        this->pokemon[i] = nullptr;
        this->inBattle[i] = nullptr;
    }
}

void Trainer::setPokemonAtIndex(Pokemon *pokemon, us index)
{
    if (this->pokemon[index] != nullptr)
        delete this->pokemon[index];

    this->pokemon[index] = pokemon;
}

Pokemon *Trainer::getPokemonAtIndex(us index)
{
    return this->pokemon[index];
}

Trainer::~Trainer()
{
    for (us i = 0; i < 5; ++i)
        delete this->pokemon[i];

    delete[] this->inBattle;
    delete[] this->pokemon;
}

void Trainer::engage(Trainer &trainer, BattleType type)
{
    //TODO this should all be in a loop until one sides Pokemon are all out
    for (us i = 0; i < type + 1; ++i)
    {
        this->pokemon[i]->setBattleState(true);
        trainer.pokemon[i]->setBattleState(true);
    }
    this->pokemon[2]->getMove(0)->effect(this->getPokemon(), trainer.getAllInBattle(type), 2, type);

    for (us i = 0; i < type + 1; ++i)
    {
        this->pokemon[i]->setBattleState(false);
        trainer.pokemon[i]->setBattleState(false);
    }
}

Pokemon **Trainer::getPokemon()
{
    return this->pokemon;
}

Pokemon **Trainer::getAllInBattle(BattleType type)
{
    us arrIndex = 0;
    for (us i = 0; i < type + 1; ++i)
        if (this->pokemon[i]->getBattleState())
            this->inBattle[arrIndex++] = this->pokemon[i];

    return this->inBattle;
}