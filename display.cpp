/*! \file display.cpp
    \brief C++ file for displaying text.
    \details Contains the function definitions for displaying text.
    \date 12/18/2021
    \version 1.0
    \author Matthew Moore
*/

#include "display.h"

/* Member Functions */

void Display::printBattleState(const std::unique_ptr<std::unique_ptr<Pokemon>[]> &trainerEngaged, const std::unique_ptr<std::unique_ptr<Pokemon>[]> &opponentEngaged, const BattleType type, const bool mainChar) const
{
    us loopCond = static_cast<us>(type + 1);
    std::unique_ptr<std::string[]> topNames = std::make_unique<std::string[]>(loopCond);
    std::unique_ptr<std::string[]> botNames = std::make_unique<std::string[]>(loopCond);
    std::unique_ptr<us[]> maxWidth = std::make_unique<us[]>(loopCond);
    std::unique_ptr<us[]> topWidth = std::make_unique<us[]>(loopCond);
    std::unique_ptr<us[]> botWidth = std::make_unique<us[]>(loopCond);
    std::unique_ptr<us[]> topNameWidth = std::make_unique<us[]>(loopCond);
    std::unique_ptr<us[]> botNameWidth = std::make_unique<us[]>(loopCond);

    this->getWidths(trainerEngaged, opponentEngaged, topNames, topNameWidth, topWidth, maxWidth, loopCond, mainChar);

    this->getWidths(trainerEngaged, opponentEngaged, botNames, botNameWidth, botWidth, maxWidth, loopCond, mainChar);

    this->outputNames(botNameWidth, topNameWidth, maxWidth, topWidth, topNames, loopCond);

    std::cout << std::endl;

    this->outputHp(trainerEngaged, opponentEngaged, topNameWidth, botNameWidth, loopCond, mainChar);

    std::cout << std::endl
              << std::endl;

    this->outputNames(topNameWidth, botNameWidth, maxWidth, botWidth, botNames, loopCond);

    std::cout << std::endl;

    this->outputHp(trainerEngaged, opponentEngaged, topNameWidth, botNameWidth, loopCond, mainChar);

    std::cout << std::endl
              << std::endl;

    this->displayBattleMenu(topNameWidth, botNameWidth, botNames, loopCond, 4);
}

void Display::getWidths(const std::unique_ptr<std::unique_ptr<Pokemon>[]> &trainerPoke, const std::unique_ptr<std::unique_ptr<Pokemon>[]> &opponentPoke, std::unique_ptr<std::string[]> &names, std::unique_ptr<us[]> &nameWidths, std::unique_ptr<us[]> &widths, std::unique_ptr<us[]> &maxWidths, const us loopCond, const bool mainChar) const
{
    static bool secondRun = false;
    static bool mainCharacter = mainChar;

    for (us i = 0; i < loopCond; ++i)
    {
        if (mainCharacter)
        {
            names[i] = this->colorText.colorPokemonNames(opponentPoke[i]);
            nameWidths[i] = static_cast<us>(opponentPoke[i]->getName().length());
        }
        else
        {
            names[i] = this->colorText.colorPokemonNames(trainerPoke[i]);
            nameWidths[i] = static_cast<us>(trainerPoke[i]->getName().length());
        }

        widths[i] = static_cast<us>(names[i].length());

        if (!secondRun)
            maxWidths[i] = widths[i];
        else
            maxWidths[i] = maxWidths[i] > widths[i] ? maxWidths[i] : widths[i];
    }

    secondRun = true;

    mainCharacter = !mainCharacter;
}

void Display::outputNames(const std::unique_ptr<us[]> &greaterNameWidths, const std::unique_ptr<us[]> &lowerNameWidths, const std::unique_ptr<us[]> &maxWidths, const std::unique_ptr<us[]> &widths, const std::unique_ptr<std::string[]> &names, const us loopCond) const
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

void Display::outputHp(const std::unique_ptr<std::unique_ptr<Pokemon>[]> &trainerPoke, const std::unique_ptr<std::unique_ptr<Pokemon>[]> &opponentPoke, const std::unique_ptr<us[]> &topNameWidths, const std::unique_ptr<us[]> &botNameWidths, const us loopCond, const bool mainChar) const
{
    int width = 0;
    std::string output;

    static bool mainCharacter = mainChar;

    for (us i = 0; i < loopCond; ++i)
    {
        width = topNameWidths[i] > botNameWidths[i] ? topNameWidths[i] : botNameWidths[i];

        std::cout << std::setw(i == 0 ? width : width + 5);

        if (mainCharacter)
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

    mainCharacter = !mainCharacter;
}

void Display::displayBattleMenu(const std::unique_ptr<us[]> &topNameWidths, const std::unique_ptr<us[]> &botNameWidths, const std::unique_ptr<std::string[]> &botNames, const us loopCond, const us pokeIndex) const
{
    int width = static_cast<int>(botNames[pokeIndex].length());
    if (topNameWidths[pokeIndex] > botNameWidths[pokeIndex])
        width += topNameWidths[pokeIndex] - botNameWidths[pokeIndex];

    for (us i = pokeIndex >= loopCond - 1 ? 1 : 0; i < loopCond - 1; ++i)
    {
        if (i != pokeIndex)
            width += topNameWidths[i] > botNameWidths[i] ? topNameWidths[i] : botNameWidths[i];
        width += i == 0 ? 0 : 5;
    }

    std::cout << std::setw(width);

    std::string name = "What will " + botNames[pokeIndex] + " do?";

    int newWidth = topNameWidths[static_cast<unsigned long>(loopCond - 1)] > botNameWidths[static_cast<unsigned long>(loopCond - 1)] ? topNameWidths[static_cast<unsigned long>(loopCond - 1)] : botNameWidths[static_cast<unsigned long>(loopCond - 1)];

    std::cout << name << std::setw(newWidth);

    std::cout << "Fight" << std::setw(5) << "Bag" << std::endl
              << std::endl;

    width -= static_cast<int>(botNames[pokeIndex].length());
    width += botNameWidths[pokeIndex];

    std::cout << std::setw(width + newWidth);

    std::cout << "Pokemon" << std::setw(5) << "Run" << std::endl;

    return;
}