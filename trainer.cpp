/*! \file trainer.cpp
    \brief C++ file for Pokemon trainer.
    \details Contains the function definitions for the Pokemon trainer.
    \date 10/08/2021
    \version 1.0
    \author Matthew Moore
*/

#include "trainer.h"

/* Constructors and Destructors */

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

Trainer::~Trainer()
{
    for (us i = 0; i < 5; ++i)
        delete this->trainerPokemon[i];

    delete[] this->inBattle;
    delete[] this->trainerPokemon;
}

/* Member Functions */

void Trainer::engage(Trainer &trainer, const BattleType type)
{
    //TODO this should all be in a loop until one sides Pokemon are all out
    for (us i = 0; i < static_cast<us>(type + 1); ++i)
    {
        this->trainerPokemon[i]->setBattleState(true);
        trainer.trainerPokemon[i]->setBattleState(true);
    }

    this->trainerPokemon[2]->getMove(0)->effect(this->getAllPokemon(), trainer.getAllInBattle(type), 2, type);

    for (us i = 0; i < static_cast<us>(type + 1); ++i)
    {
        this->trainerPokemon[i]->setBattleState(false);
        trainer.trainerPokemon[i]->setBattleState(false);
    }
}

/* Getters */

Pokemon *Trainer::getPokemonAtIndex(const us index) const
{
    return this->trainerPokemon[index];
}

Pokemon **Trainer::getAllPokemon() const
{
    return this->trainerPokemon;
}

Pokemon **Trainer::getAllInBattle(const BattleType type) const
{
    us arrIndex = 0;

    for (us i = 0; i < static_cast<us>(type + 1); ++i)
        // Determine if a Pokemon is engaged in battle
        if (this->trainerPokemon[i]->getBattleState())
            this->inBattle[arrIndex++] = this->trainerPokemon[i];

    return this->inBattle;
}

/* Setters */

void Trainer::setPokemonAtIndex(Pokemon *pokemon, const us index)
{
    if (this->trainerPokemon[index] != nullptr)
        delete this->trainerPokemon[index];

    this->trainerPokemon[index] = pokemon;
}
