/*! \file colors.cpp
    \brief C++ file for coloring text.
    \details Contains the function definitions for coloring text.
    \date 08/11/2023
    \version 1.0
    \author Matthew Moore
*/

#include "output/colors.h"

/* Constructors and Destructors */

ColoredText::ColoredText()
{
    this->typeColors[0] = ColoredText::initColors(NORMAL_COLOR, 168, 168, 120);
    this->typeColors[1] = ColoredText::initColors(FIRE_COLOR, 240, 128, 48);
    this->typeColors[2] = ColoredText::initColors(WATER_COLOR, 104, 144, 240);
    this->typeColors[3] = ColoredText::initColors(ELECTRIC_COLOR, 248, 208, 48);
    this->typeColors[4] = ColoredText::initColors(GRASS_COLOR, 120, 200, 80);
    this->typeColors[5] = ColoredText::initColors(ICE_COLOR, 152, 216, 216);
    this->typeColors[6] = ColoredText::initColors(FIGHTING_COLOR, 192, 48, 40);
    this->typeColors[7] = ColoredText::initColors(POISON_COLOR, 160, 64, 160);
    this->typeColors[8] = ColoredText::initColors(GROUND_COLOR, 224, 192, 104);
    this->typeColors[9] = ColoredText::initColors(FLYING_COLOR, 168, 144, 240);
    this->typeColors[10] = ColoredText::initColors(PSYCHIC_COLOR, 248, 88, 136);
    this->typeColors[11] = ColoredText::initColors(BUG_COLOR, 168, 184, 32);
    this->typeColors[12] = ColoredText::initColors(ROCK_COLOR, 184, 160, 56);
    this->typeColors[13] = ColoredText::initColors(GHOST_COLOR, 112, 88, 152);
    this->typeColors[14] = ColoredText::initColors(DRAGON_COLOR, 112, 56, 248);
    this->typeColors[15] = ColoredText::initColors(DARK_COLOR, 112, 88, 72);
    this->typeColors[16] = ColoredText::initColors(STEEL_COLOR, 184, 184, 208);
    this->typeColors[17] = ColoredText::initColors(FAIRY_COLOR, 238, 153, 172);
}

/* Member Functions */

us ColoredText::initColors(const us typeColor, const us red, const us green, const us blue)
{
    ss nRed = 0;
    ss nGreen = 0;
    ss nBlue = 0;

    nRed = static_cast<ss>((red / 255.0) * 1000);
    nGreen = static_cast<ss>((green / 255.0) * 1000);
    nBlue = static_cast<ss>((blue / 255.0) * 1000);

    init_color(static_cast<ss>(typeColor), nRed, nGreen, nBlue);
    init_pair(static_cast<ss>(typeColor), static_cast<ss>(typeColor), COLOR_BLACK);

    return typeColor;
}

void ColoredText::colorPokemonNames(Pokemon &pokemon) const
{
    const PokemonTypes &types(pokemon.getTypes());
    std::string text = pokemon.getName();

    for (us i = 0; i < static_cast<us>(text.length()); i++)
    {
        if (types.getDualTyping())
        {
            us pairNum = this->typeColors[(i % 2 == 1) ? types.getSecondType() : types.getFirstType()];

            attron(COLOR_PAIR(pairNum));

            printw("%c", text[i]);

            attroff(COLOR_PAIR(pairNum));

            refresh();
        }
        else
        {
            us pairNum = this->typeColors[types.getFirstType()];

            attron(COLOR_PAIR(pairNum));

            printw("%c", text[i]);

            attroff(COLOR_PAIR(pairNum));

            refresh();
        }
    }
}