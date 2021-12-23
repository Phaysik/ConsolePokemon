/*! \file display.cpp
    \brief C++ file for displaying text.
    \details Contains the function definitions for displaying text.
    \date 12/23/2021
    \version 1.0
    \author Matthew Moore
*/

#include <output/display.h>

/* Member Functions */

void Display::printBattleState(Pokemon **trainerEngaged, Pokemon **opponentEngaged, const BattleType type, const bool mainChar) const
{
    us loopCond = static_cast<us>(type + 1);
    us *maxWidth = new us[loopCond];

    this->getMaxPokemonWidth(trainerEngaged, opponentEngaged, maxWidth, loopCond);

    if (!mainChar)
        this->outputNames(trainerEngaged, opponentEngaged, maxWidth, loopCond);
    else
        this->outputNames(opponentEngaged, trainerEngaged, maxWidth, loopCond);

    printw("\n");
    refresh();

    this->outputHp(trainerEngaged, opponentEngaged, loopCond, mainChar);

    printw("\n\n");
    refresh();

    if (!mainChar)
        this->outputNames(opponentEngaged, trainerEngaged, maxWidth, loopCond);
    else
        this->outputNames(trainerEngaged, opponentEngaged, maxWidth, loopCond);

    printw("\n");
    refresh();

    this->outputHp(trainerEngaged, opponentEngaged, loopCond, mainChar);

    printw("\n\n");
    refresh();

    if (!mainChar)
        this->displayBattleMenu(opponentEngaged, trainerEngaged, loopCond, 0);
    else
        this->displayBattleMenu(trainerEngaged, opponentEngaged, loopCond, 0);

    delete[] maxWidth;
}

void Display::getMaxPokemonWidth(Pokemon **trainerPoke, Pokemon **opponentPoke, us *maxWidths, const us loopCond) const
{
    us oppLength, tranLength;

    for (us i = 0; i < loopCond; ++i)
    {
        oppLength = static_cast<us>(opponentPoke[i]->getName().length());
        tranLength = static_cast<us>(trainerPoke[i]->getName().length());

        if (oppLength >= tranLength)
            maxWidths[i] = oppLength;
        else
            maxWidths[i] = tranLength;
    }
}

void Display::outputNames(Pokemon **trainerPoke, Pokemon **opponentPoke, const us *maxWidths, const us loopCond) const
{
    int addVal = 0;
    us oppLength, tranLength;

    for (us i = 0; i < loopCond; i++)
    {
        oppLength = static_cast<us>(opponentPoke[i]->getName().length());
        tranLength = static_cast<us>(trainerPoke[i]->getName().length());

        if (oppLength > tranLength)
            addVal = oppLength - tranLength;
        else
            addVal = 0;

        if (i == 0)
        {
            if (tranLength == maxWidths[i])
                this->colorText->colorPokemonNames(trainerPoke[i]);
            else
            {
                printw("%*s", addVal, "");
                refresh();
                this->colorText->colorPokemonNames(trainerPoke[i]);
            }
        }
        else
        {
            if (tranLength == maxWidths[i])
            {
                printw("%*s", 5 + addVal, "");
                refresh();
                this->colorText->colorPokemonNames(trainerPoke[i]);
            }
            else
            {
                printw("%*s", 5 + addVal, "");
                refresh();
                this->colorText->colorPokemonNames(trainerPoke[i]);
            }
        }
    }
}

void Display::outputHp(Pokemon **trainerPoke, Pokemon **opponentPoke, const us loopCond, const bool mainChar) const
{
    int width = 0, outWidth;
    us oppLength, tranLength;
    std::string output;

    static bool mainCharacter = mainChar;

    for (us i = 0; i < loopCond; ++i)
    {
        oppLength = static_cast<us>(opponentPoke[i]->getName().length());
        tranLength = static_cast<us>(trainerPoke[i]->getName().length());

        width = oppLength > tranLength ? oppLength : tranLength;

        outWidth = i == 0 ? width : width + 5;

        if (mainCharacter)
        {

            output = std::to_string(static_cast<int>(opponentPoke[i]->getStats()->getHp())) + "/" + std::to_string(static_cast<int>(opponentPoke[i]->getStats()->getMaxHp()));

            printw("%*s", outWidth, output.c_str());
        }
        else
        {
            output = std::to_string(static_cast<int>(trainerPoke[i]->getStats()->getHp())) + "/" + std::to_string(static_cast<int>(trainerPoke[i]->getStats()->getMaxHp()));

            printw("%*s", outWidth, output.c_str());
        }

        refresh();
    }

    mainCharacter = !mainCharacter;
}

void Display::displayBattleMenu(Pokemon **trainerPoke, Pokemon **opponentPoke, const us loopCond, const us pokeIndex) const
{
    int oppLength, tranLength;
    tranLength = static_cast<int>(trainerPoke[pokeIndex]->getName().length());
    oppLength = static_cast<int>(opponentPoke[pokeIndex]->getName().length());
    int width = tranLength;

    if (oppLength > tranLength)
        width += oppLength - tranLength;

    for (us i = pokeIndex >= loopCond - 1 ? 1 : 0; i < loopCond - 1; ++i)
    {
        tranLength = static_cast<int>(trainerPoke[i]->getName().length());
        oppLength = static_cast<int>(opponentPoke[i]->getName().length());

        if (i != pokeIndex)
            width += oppLength > tranLength ? oppLength : tranLength;

        width += i == 0 ? 0 : 5;
    }

    std::string name = "What will " + trainerPoke[pokeIndex]->getName() + " do?";

    width += static_cast<int>(name.length());

    printw("%*s", width, name.c_str());
    refresh();

    tranLength = static_cast<int>(trainerPoke[pokeIndex]->getName().length());

    tranLength = static_cast<int>(trainerPoke[loopCond - 1]->getName().length());
    oppLength = static_cast<int>(opponentPoke[loopCond - 1]->getName().length());

    name = "Pokemon     Run";

    oppLength = static_cast<int>(name.length());

    name = "Fight     Bag";

    tranLength = static_cast<int>(name.length());

    printw("%*s\n", 5 + tranLength, name.c_str());
    refresh();

    name = "Pokemon     Run";

    printw("%*s\n", width + 5 + oppLength - (oppLength - tranLength), name.c_str());
    refresh();

    return;
}

/* Setters */

void Display::setColorText(ColoredText *color)
{
    this->colorText = color;
}