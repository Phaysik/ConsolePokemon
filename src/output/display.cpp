/*! \file display.cpp
    \brief C++ file for displaying text.
    \details Contains the function definitions for displaying text.
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#include "output/display.h"

/* Member Functions */

void Display::printBattleState(std::array<Pokemon, MAX_POKEMON> &trainerEngaged, std::array<Pokemon, MAX_POKEMON> &opponentEngaged, const BattleType type, const bool mainChar, const us action) const
{
    us loopCond = static_cast<us>(type + 1);
    std::unique_ptr<us[]> maxWidth = std::make_unique_for_overwrite<us[]>(loopCond);

    Display::getMaxPokemonWidth(trainerEngaged, opponentEngaged, maxWidth, loopCond);

    if (!mainChar)
    {
        this->outputNames(trainerEngaged, opponentEngaged, maxWidth, loopCond);
    }
    else
    {
        this->outputNames(opponentEngaged, trainerEngaged, maxWidth, loopCond);
    }

    printw("\n");
    refresh();

    Display::outputHp(trainerEngaged, opponentEngaged, loopCond, mainChar);

    printw("\n\n");
    refresh();

    if (!mainChar)
    {
        this->outputNames(opponentEngaged, trainerEngaged, maxWidth, loopCond);
    }
    else
    {
        this->outputNames(trainerEngaged, opponentEngaged, maxWidth, loopCond);
    }

    printw("\n");
    refresh();

    Display::outputHp(trainerEngaged, opponentEngaged, loopCond, mainChar);

    printw("\n\n");
    refresh();

    if (!mainChar)
    {
        Display::displayBattleMenu(opponentEngaged, trainerEngaged, loopCond, 0, action);
    }
    else
    {
        Display::displayBattleMenu(trainerEngaged, opponentEngaged, loopCond, 0, action);
    }
}

void Display::getMaxPokemonWidth(std::array<Pokemon, MAX_POKEMON> &trainerPoke, std::array<Pokemon, MAX_POKEMON> &opponentPoke, std::unique_ptr<us[]> &maxWidths, const us loopCond)
{
    us oppLength = 0;
    us tranLength = 0;

    for (us i = 0; i < loopCond; ++i)
    {
        oppLength = static_cast<us>(opponentPoke[i].getName().length());
        tranLength = static_cast<us>(trainerPoke[i].getName().length());

        if (oppLength >= tranLength)
        {
            maxWidths[i] = oppLength;
        }
        else
        {
            maxWidths[i] = tranLength;
        }
    }
}

void Display::outputNames(std::array<Pokemon, MAX_POKEMON> &trainerPoke, std::array<Pokemon, MAX_POKEMON> &opponentPoke, std::unique_ptr<us[]> &maxWidths, const us loopCond) const
{
    int addVal = 0;
    us oppLength = 0;
    us tranLength = 0;

    for (us i = 0; i < loopCond; i++)
    {
        oppLength = static_cast<us>(opponentPoke[i].getName().length());
        tranLength = static_cast<us>(trainerPoke[i].getName().length());

        if (oppLength > tranLength)
        {
            addVal = oppLength - tranLength;
        }
        else
        {
            addVal = 0;
        }

        if (i == 0)
        {
            if (tranLength == maxWidths[i])
            {
                this->colorText.colorPokemonNames(trainerPoke[i]);
            }
            else
            {
                printw("%*s", addVal, "");
                refresh();
                this->colorText.colorPokemonNames(trainerPoke[i]);
            }
        }
        else
        {
            printw("%*s", 5 + addVal, "");
            refresh();
            this->colorText.colorPokemonNames(trainerPoke[i]);
        }
    }
}

void Display::outputHp(std::array<Pokemon, MAX_POKEMON> &trainerPoke, std::array<Pokemon, MAX_POKEMON> &opponentPoke, const us loopCond, const bool mainChar)
{
    int width = 0;
    int outWidth = 0;
    us oppLength = 0;
    us tranLength = 0;
    std::string output;

    static bool mainCharacter = mainChar;

    for (us i = 0; i < loopCond; ++i)
    {
        oppLength = static_cast<us>(opponentPoke[i].getName().length());
        tranLength = static_cast<us>(trainerPoke[i].getName().length());

        width = oppLength > tranLength ? oppLength : tranLength;

        outWidth = i == 0 ? width : width + 5;

        if (mainCharacter)
        {

            output = std::to_string(static_cast<int>(opponentPoke[i].getStats()->getHp())) + "/" + std::to_string(static_cast<int>(opponentPoke[i].getStats()->getMaxHp()));

            printw("%*s", outWidth, output.c_str());
        }
        else
        {
            output = std::to_string(static_cast<int>(trainerPoke[i].getStats()->getHp())) + "/" + std::to_string(static_cast<int>(trainerPoke[i].getStats()->getMaxHp()));

            printw("%*s", outWidth, output.c_str());
        }

        refresh();
    }

    mainCharacter = !mainCharacter;
}

void Display::displayBattleMenu(std::array<Pokemon, MAX_POKEMON> &trainerPoke, std::array<Pokemon, MAX_POKEMON> &opponentPoke, const us loopCond, const us pokeIndex, const us action)
{
    int oppLength = 0;
    int tranLength = 0;
    tranLength = static_cast<int>(trainerPoke[pokeIndex].getName().length());
    oppLength = static_cast<int>(opponentPoke[pokeIndex].getName().length());
    int width = tranLength;

    if (oppLength > tranLength)
    {
        width += oppLength - tranLength;
    }

    for (us index = pokeIndex >= loopCond - 1 ? 1 : 0; index < loopCond - 1; ++index)
    {
        tranLength = static_cast<int>(trainerPoke[index].getName().length());
        oppLength = static_cast<int>(opponentPoke[index].getName().length());

        if (index != pokeIndex)
        {
            width += oppLength > tranLength ? oppLength : tranLength;
        }

        width += index == 0 ? 0 : 5;
    }

    std::string name = "What will " + trainerPoke[pokeIndex].getName() + " do?";

    width += static_cast<int>(name.length());

    printw("%*s", width, name.c_str());
    refresh();

    tranLength = static_cast<int>(trainerPoke[loopCond - 1].getName().length());
    oppLength = static_cast<int>(opponentPoke[loopCond - 1].getName().length());

    name = "Pokemon     Run";

    oppLength = static_cast<int>(name.length());

    name = "Fight     Bag";

    tranLength = static_cast<int>(name.length());

    if (action == 0)
    {
        attron(A_BOLD);
        printw("%*s", 2 + tranLength, "Fight     ");
        attroff(A_BOLD);
    }
    else
    {
        printw("%*s", 2 + tranLength, "Fight     ");
    }

    refresh();

    if (action == 1)
    {
        attron(A_BOLD);
        printw("%s\n", "Bag");
        attroff(A_BOLD);
    }
    else
    {
        printw("%s\n", "Bag");
    }

    refresh();

    if (action == 2)
    {
        attron(A_BOLD);
        printw("%*s", width + 2 + oppLength - (oppLength - tranLength), "Pokemon     ");
        attroff(A_BOLD);
    }
    else
    {
        printw("%*s", width + 2 + oppLength - (oppLength - tranLength), "Pokemon     ");
    }

    refresh();

    if (action == 3)
    {
        attron(A_BOLD);
        printw("%s\n", "Run");
        attroff(A_BOLD);
    }
    else
    {
        printw("%s\n", "Run");
    }

    refresh();
}

/* Setters */

void Display::setColorText(ColoredText &color)
{
    this->colorText = color;
}