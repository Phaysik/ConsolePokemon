/*! \file display.cpp
    \brief C++ file for displaying text.
    \details Contains the function definitions for displaying text.
    \date 10/21/2021
    \version 1.0
    \author Matthew Moore
*/

#include "display.h"

/* Member Functions */

void Display::printBattleState(Pokemon **trainerEngaged, Pokemon **opponentEngaged, const BattleType type, const bool mainChar) const
{
    us loopCond = static_cast<us>(type + 1);
    std::string *topNames = new std::string[loopCond];
    std::string *botNames = new std::string[loopCond];
    us *maxWidth = new us[loopCond];
    us *topWidth = new us[loopCond];
    us *botWidth = new us[loopCond];
    us *topNameWidth = new us[loopCond];
    us *botNameWidth = new us[loopCond];

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

    this->displayBattleMenu(trainerEngaged, opponentEngaged, mainChar, topNameWidth, botNameWidth, loopCond);

    delete[] maxWidth;
    delete[] topNames;
    delete[] botNames;
    delete[] topWidth;
    delete[] botWidth;
    delete[] topNameWidth;
    delete[] botNameWidth;
}

void Display::getWidths(Pokemon **trainerPoke, Pokemon **opponentPoke, std::string *names, us *nameWidths, us *widths, us *maxWidths, const us loopCond, const bool mainChar) const
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

void Display::outputNames(const us *greaterNameWidths, const us *lowerNameWidths, const us *maxWidths, const us *widths, const std::string *names, const us loopCond) const
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

void Display::outputHp(Pokemon **trainerPoke, Pokemon **opponentPoke, const us *topNameWidths, const us *botNameWidths, const us loopCond, const bool mainChar) const
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

void Display::displayBattleMenu(Pokemon **trainerEngaged, Pokemon **opponentEngaged, const bool mainChar, const us *topNameWidths, const us *botNameWidths, const us loopCond) const
{
    int width = 0;

    for (us i = 0; i < loopCond - 1; ++i)
    {
        width += topNameWidths[i] > botNameWidths[i] ? topNameWidths[i] : botNameWidths[i];
        width += i == 0 ? 0 : 5;
    }

    std::cout << std::setw(width);

    //TODO Use colored name, which means that the index of the trainer's pokemon in use must be passed in
    std::string name = "What will " + (mainChar ? trainerEngaged[0]->getName() : opponentEngaged[0]->getName()) + " do?";

    int newWidth = topNameWidths[loopCond - 1] > botNameWidths[loopCond - 1] ? topNameWidths[loopCond - 1] : botNameWidths[loopCond - 1];

    std::cout << name << std::setw(newWidth);

    std::cout << "Fight" << std::setw(5) << "Bag" << std::endl
              << std::endl;

    std::cout << std::setw(width + newWidth);

    std::cout << "Pokemon" << std::setw(5) << "Run" << std::endl;

    return;
}