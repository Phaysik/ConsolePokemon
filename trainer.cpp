/*
 * @file trainer.cpp
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/20/2021
 * @brief The declaration for the Trainer class
*/

#include "trainer.h"
#include "pokemon.h"

Trainer::Trainer()
{
    this->pokemon = new Pokemon *[5];

    for (us i = 0; i < 5; ++i)
        this->pokemon[i] = nullptr;
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

    delete[] this->pokemon;
}