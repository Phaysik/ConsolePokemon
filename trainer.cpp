/*! \file trainer.cpp
    \brief C++ file for Pokemon trainer.
    \details Contains the function definitions for the Pokemon trainer.
    \date 12/18/2021
    \version 1.0
    \author Matthew Moore
*/

#include "trainer.h"

/* Constructors and Destructors */

Trainer::Trainer(const bool isMainCharacter)
{
    this->trainerPokemon = std::make_unique<std::unique_ptr<Pokemon>[]>(5);
    this->inBattle = std::make_unique<std::unique_ptr<Pokemon>[]>(5);

    this->isPlayableCharacter = isMainCharacter;
}

Trainer::~Trainer()
{
}

/* Member Functions */

void Trainer::engage(Trainer &opponent, const BattleType type)
{
    // TODO this should all be in a loop until one sides Pokemon are all out
    for (us i = 0; i < static_cast<us>(type + 1); ++i)
    {
        this->trainerPokemon[i]->setBattleState(true);
        opponent.trainerPokemon[i]->setBattleState(true);
    }

    const std::unique_ptr<std::unique_ptr<Pokemon>[]> &trainerEngaged = this->getAllInBattle(type);
    const std::unique_ptr<std::unique_ptr<Pokemon>[]> &opponentEngaged = opponent.getAllInBattle(type);

    this->display.printBattleState(trainerEngaged, opponentEngaged, type, this->getMainCharacter());

    this->trainerPokemon[2]->getMove(0)->effect(this->getAllPokemon(), opponentEngaged, 2, type);

    // Update stats after battle
    for (us i = 0; i < 5; ++i)
    {
        this->trainerPokemon[i] = std::make_unique<Pokemon>(*this->inBattle[i]);
        opponent.trainerPokemon[i] = std::make_unique<Pokemon>(*opponent.inBattle[i]);
    }

    for (us i = 0; i < static_cast<us>(type + 1); ++i)
    {
        this->trainerPokemon[i]->setBattleState(false);
        opponent.trainerPokemon[i]->setBattleState(false);
    }
}

/* Getters */

const std::unique_ptr<Pokemon> &Trainer::getPokemonAtIndex(const us index) const
{
    return this->trainerPokemon[index];
}

const std::unique_ptr<std::unique_ptr<Pokemon>[]> &Trainer::getAllPokemon() const {
    return this->trainerPokemon;
}

const std::unique_ptr<std::unique_ptr<Pokemon>[]> &Trainer::getAllInBattle(const BattleType type)
{
    // TODO: Instead of looping based on the battle type, loop based on how many Pokemon in party
    us arrIndex = 0;

    for (us i = 0; i < static_cast<us>(type + 1); ++i)
        // Determine if a Pokemon is engaged in battle
        if (this->trainerPokemon[i]->getBattleState())
            this->inBattle[arrIndex++] = std::make_unique<Pokemon>(*this->trainerPokemon[i]);

    return this->inBattle;
}

bool Trainer::getMainCharacter() const
{
    return this->isPlayableCharacter;
}

/* Setters */

void Trainer::setPokemonAtIndex(const std::unique_ptr<Pokemon> &pokemon, const us index)
{
    this->trainerPokemon[index] = std::make_unique<Pokemon>(*pokemon);
}
