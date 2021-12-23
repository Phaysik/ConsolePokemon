/*! \file colors.cpp
    \brief C++ file for coloring text.
    \details Contains the function definitions for coloring text.
    \date 12/19/2021
    \version 1.0
    \author Matthew Moore
*/

#include "colors.h"

/* Constructors and Destructors */

ColoredText::ColoredText()
{
    this->typeColors = new short[Types::TYPES_MAX];
    this->typeColors[0] = this->initColors(NORMAL_COLOR, 168, 168, 120);
    this->typeColors[1] = this->initColors(FIRE_COLOR, 240, 128, 48);
    this->typeColors[2] = this->initColors(WATER_COLOR, 104, 144, 240);
    this->typeColors[3] = this->initColors(ELECTRIC_COLOR, 248, 208, 48);
    this->typeColors[4] = this->initColors(GRASS_COLOR, 120, 200, 80);
    this->typeColors[5] = this->initColors(ICE_COLOR, 152, 216, 216);
    this->typeColors[6] = this->initColors(FIGHTING_COLOR, 192, 48, 40);
    this->typeColors[7] = this->initColors(POISON_COLOR, 160, 64, 160);
    this->typeColors[8] = this->initColors(GROUND_COLOR, 224, 192, 104);
    this->typeColors[9] = this->initColors(FLYING_COLOR, 168, 144, 240);
    this->typeColors[10] = this->initColors(PSYCHIC_COLOR, 248, 88, 136);
    this->typeColors[11] = this->initColors(BUG_COLOR, 168, 184, 32);
    this->typeColors[12] = this->initColors(ROCK_COLOR, 184, 160, 56);
    this->typeColors[13] = this->initColors(GHOST_COLOR, 112, 88, 152);
    this->typeColors[14] = this->initColors(DRAGON_COLOR, 112, 56, 248);
    this->typeColors[15] = this->initColors(DARK_COLOR, 112, 88, 72);
    this->typeColors[16] = this->initColors(STEEL_COLOR, 184, 184, 208);
    this->typeColors[17] = this->initColors(FAIRY_COLOR, 238, 153, 172);

    // this->bold = RGB(255, 255, 255);
}

ColoredText::~ColoredText()
{
    delete[] this->typeColors;
}

/* Member Functions */

short ColoredText::initColors(short typeColor, short red, short green, short blue)
{
    short nRed, nGreen, nBlue;

    nRed = static_cast<short>((red / 255.0) * 1000);
    nGreen = static_cast<short>((green / 255.0) * 1000);
    nBlue = static_cast<short>((blue / 255.0) * 1000);

    init_color(typeColor, nRed, nGreen, nBlue);
    init_pair(typeColor, typeColor, COLOR_BLACK);

    return typeColor;
}

void ColoredText::colorPokemonNames(const Pokemon *pokemon) const
{
    Types *types = pokemon->getTypes();
    std::string text = pokemon->getName();

    for (us i = 0; i < static_cast<us>(text.length()); i++)
    {
        if (pokemon->getDualTyping())
        {
            short pairNum = this->typeColors[types[i % 2]];

            attron(COLOR_PAIR(pairNum));

            printw("%c", text[i]);

            attroff(COLOR_PAIR(pairNum));

            refresh();
        }
        else
        {
            short pairNum = this->typeColors[types[0]];

            attron(COLOR_PAIR(pairNum));

            printw("%c", text[i]);

            attroff(COLOR_PAIR(pairNum));

            refresh();
        }
    }
}