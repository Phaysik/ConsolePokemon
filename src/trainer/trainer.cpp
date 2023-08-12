/*! \file trainer.cpp
    \brief C++ file for Pokemon trainer.
    \details Contains the function definitions for the Pokemon trainer.
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#include "trainer/trainer.h"

/* Member Functions */

void Trainer::engage(Trainer *opponent, const BattleType type)
{
    // TODO(phaysik) this should all be in a loop until one sides Pokemon are all out
    for (us i = 0; i < static_cast<us>(type + 1); ++i)
    {
        this->trainerPokemon[i].setBattleState(true);
        opponent->trainerPokemon[i].setBattleState(true);
    }

    std::array<Pokemon, MAX_POKEMON> trainerEngaged = this->getAllInBattle(type);
    std::array<Pokemon, MAX_POKEMON> opponentEngaged = opponent->getAllInBattle(type);

    us actionPos = 0;

    this->display->printBattleState(trainerEngaged, opponentEngaged, type, this->getMainCharacter(), actionPos);

    int userInput;

    do
    {
        userInput = getch();

        bool noChange = false;

        switch (userInput)
        {
        case KEY_LEFT:
            actionPos = static_cast<us>(abs(actionPos - 1) % 2 + (actionPos <= 1 ? 0 : 2));
            break;
        case KEY_RIGHT:
            actionPos = static_cast<us>((actionPos + 1) % 2 + (actionPos <= 1 ? 0 : 2));
            break;
        case KEY_UP:
            actionPos = static_cast<us>((actionPos + 2) % 4);
            break;
        case KEY_DOWN:
            actionPos = static_cast<us>(abs(actionPos - 2) % 4 + (actionPos != 1 ? 0 : 2));
            break;
        default:
            noChange = true;
            break;
        }

        if (!noChange) // Don't reprint if a different choice was not made
        {
            clear();

            this->display->printBattleState(trainerEngaged, opponentEngaged, type, this->getMainCharacter(), actionPos);
        }

    } while (userInput != 103); // This is the 'g' key for testing purposes

    clear();

    // this->trainerPokemon[2].getMove(0)->effect(this->getAllPokemon(), opponent->getAllInBattle(type), 2, type);

    for (us i = 0; i < static_cast<us>(type + 1); ++i)
    {
        this->trainerPokemon[i].setBattleState(false);
        opponent->trainerPokemon[i].setBattleState(false);
    }
}

/* Getters */

Pokemon &Trainer::getPokemonAtIndex(const us index)
{
    return this->trainerPokemon[index];
}

std::array<Pokemon, MAX_POKEMON> &Trainer::getAllPokemon()
{
    return this->trainerPokemon;
}

std::array<Pokemon, MAX_POKEMON> &Trainer::getAllInBattle(const BattleType type)
{
    // TODO: Instead of looping based on the battle type, loop based on how many Pokemon in party
    us arrIndex = 0;

    for (us i = 0; i < static_cast<us>(type + 1); ++i)
        // Determine if a Pokemon is engaged in battle
        if (this->trainerPokemon[i].getBattleState())
            this->inBattle[arrIndex++] = this->trainerPokemon[i];

    return this->inBattle;
}

bool Trainer::getMainCharacter() const
{
    return this->isPlayableCharacter;
}

/* Setters */

void Trainer::setPokemonAtIndex(Pokemon &pokemon, const us index)
{
    this->trainerPokemon[index] = pokemon;
}
