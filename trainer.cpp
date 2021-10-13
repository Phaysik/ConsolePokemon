/*! \file trainer.cpp
    \brief C++ file for Pokemon trainer.
    \details Contains the function definitions for the Pokemon trainer.
    \date 10/13/2021
    \version 1.0
    \author Matthew Moore
*/

#include "trainer.h"

/* Constructors and Destructors */

Trainer::Trainer(const bool isMainCharacter)
{
    this->trainerPokemon = new Pokemon *[5];
    this->inBattle = new Pokemon *[5];

    this->isPlayableCharacter = isMainCharacter;

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

void Trainer::engage(Trainer *opponent, const BattleType type)
{
    //TODO this should all be in a loop until one sides Pokemon are all out
    for (us i = 0; i < static_cast<us>(type + 1); ++i)
    {
        this->trainerPokemon[i]->setBattleState(true);
        opponent->trainerPokemon[i]->setBattleState(true);
    }

    this->printBattleState(opponent, type);

    this->trainerPokemon[2]->getMove(0)->effect(this->getAllPokemon(), opponent->getAllInBattle(type), 2, type);

    for (us i = 0; i < static_cast<us>(type + 1); ++i)
    {
        this->trainerPokemon[i]->setBattleState(false);
        opponent->trainerPokemon[i]->setBattleState(false);
    }
}

void Trainer::printBattleState(Trainer *opponent, const BattleType type)
{
    Pokemon **trainerEngaged = this->getAllInBattle(type);
    Pokemon **opponentEngaged = opponent->getAllInBattle(type);
    us loopCond = static_cast<us>(type + 1);
    std::string *topNames = new std::string[loopCond];
    std::string *botNames = new std::string[loopCond];
    us *maxWidth = new us[loopCond];
    us *topWidth = new us[loopCond];
    us *botWidth = new us[loopCond];
    us *topNameWidth = new us[loopCond];
    us *botNameWidth = new us[loopCond];

    this->getWidths(trainerEngaged, opponentEngaged, topNames, topNameWidth, topWidth, maxWidth, loopCond);

    this->getWidths(trainerEngaged, opponentEngaged, botNames, botNameWidth, botWidth, maxWidth, loopCond);

    this->outputNames(botNameWidth, topNameWidth, maxWidth, topWidth, topNames, loopCond);

    std::cout << std::endl;

    this->outputHp(trainerEngaged, opponentEngaged, topNameWidth, botNameWidth, loopCond);

    std::cout
        << std::endl
        << std::endl
        << std::endl;

    this->outputNames(topNameWidth, botNameWidth, maxWidth, botWidth, botNames, loopCond);

    std::cout << std::endl;

    this->outputHp(trainerEngaged, opponentEngaged, topNameWidth, botNameWidth, loopCond);

    std::cout << std::endl;

    delete[] maxWidth;
    delete[] topNames;
    delete[] botNames;
    delete[] topWidth;
    delete[] botWidth;
    delete[] topNameWidth;
    delete[] botNameWidth;
}

void Trainer::getWidths(Pokemon **trainerPoke, Pokemon **opponentPoke, std::string *names, us *nameWidths, us *widths, us *maxWidths, us loopCond)
{
    static bool secondRun = false;
    static bool mainChar = this->getMainCharacter();

    for (us i = 0; i < loopCond; ++i)
    {
        if (mainChar)
        {
            names[i] = this->getColorText().colorPokemonNames(opponentPoke[i]);
            nameWidths[i] = static_cast<us>(opponentPoke[i]->getName().length());
        }
        else
        {
            names[i] = this->getColorText().colorPokemonNames(trainerPoke[i]);
            nameWidths[i] = static_cast<us>(trainerPoke[i]->getName().length());
        }

        widths[i] = static_cast<us>(names[i].length());

        if (!secondRun)
            maxWidths[i] = widths[i];
        else
            maxWidths[i] = maxWidths[i] > widths[i] ? maxWidths[i] : widths[i];
    }

    secondRun = true;

    mainChar = !mainChar;
}

void Trainer::outputNames(us *greaterNameWidths, us *lowerNameWidths, us *maxWidths, us *widths, std::string *names, us loopCond)
{
    int addVal = 0;

    for (us i = 0; i < loopCond; ++i)
    {
        if (greaterNameWidths[i] > lowerNameWidths[i])
            addVal = greaterNameWidths[i] - lowerNameWidths[i];
        else
            addVal = 0;

        if (i == 0)
        {
            if (maxWidths[i] == widths[i])
                std::cout << std::setw(0) << names[i];
            else
                std::cout << std::setw(widths[i] + addVal) << names[i];
        }
        else
        {
            if (maxWidths[i] == widths[i])
                std::cout << std::setw(maxWidths[i] + 5 + addVal) << names[i];
            else
                std::cout << std::setw(widths[i] + 5 + addVal) << names[i];
        }
    }
}

void Trainer::outputHp(Pokemon **trainerPoke, Pokemon **opponentPoke, us *topNameWidths, us *botNameWidths, us loopCond)
{
    int width = 0;
    std::string output;

    static bool mainChar = this->getMainCharacter();

    for (us i = 0; i < loopCond; ++i)
    {
        width = topNameWidths[i] > botNameWidths[i] ? topNameWidths[i] : botNameWidths[i];

        std::cout << std::setw(i == 0 ? width : width + 5);

        if (mainChar)
        {

            output = std::to_string(static_cast<int>(opponentPoke[i]->getStats()->getHp())) + "/" + std::to_string(static_cast<int>(opponentPoke[i]->getStats()->getMaxHp()));

            std::cout << output;
        }
        else
        {
            output = std::to_string(static_cast<int>(trainerPoke[i]->getStats()->getHp())) + "/" + std::to_string(static_cast<int>(trainerPoke[i]->getStats()->getMaxHp()));

            std::cout << output;
        }
    }

    mainChar = !mainChar;
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
    // TODO: Instead of looping based on the battle type, loop based on how many Pokemon in party
    us arrIndex = 0;

    for (us i = 0; i < static_cast<us>(type + 1); ++i)
        // Determine if a Pokemon is engaged in battle
        if (this->trainerPokemon[i]->getBattleState())
            this->inBattle[arrIndex++] = this->trainerPokemon[i];

    return this->inBattle;
}

bool Trainer::getMainCharacter() const
{
    return this->isPlayableCharacter;
}

ColoredText &Trainer::getColorText()
{
    return this->colorText;
}

/* Setters */

void Trainer::setPokemonAtIndex(Pokemon *pokemon, const us index)
{
    if (this->trainerPokemon[index] != nullptr)
        delete this->trainerPokemon[index];

    this->trainerPokemon[index] = pokemon;
}
