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
    this->typeColors = new RGB[Types::TYPES_MAX];
    this->typeColors[0] = RGB(168, 168, 120);
    this->typeColors[1] = RGB(240, 128, 48);
    this->typeColors[2] = RGB(104, 144, 240);
    this->typeColors[3] = RGB(248, 208, 48);
    this->typeColors[4] = RGB(120, 200, 80);
    this->typeColors[5] = RGB(152, 216, 216);
    this->typeColors[6] = RGB(192, 48, 40);
    this->typeColors[7] = RGB(160, 64, 160);
    this->typeColors[8] = RGB(224, 192, 104);
    this->typeColors[9] = RGB(168, 144, 240);
    this->typeColors[10] = RGB(248, 88, 136);
    this->typeColors[11] = RGB(168, 184, 32);
    this->typeColors[12] = RGB(184, 160, 56);
    this->typeColors[13] = RGB(112, 88, 152);
    this->typeColors[14] = RGB(112, 56, 248);
    this->typeColors[15] = RGB(112, 88, 72);
    this->typeColors[16] = RGB(184, 184, 208);
    this->typeColors[17] = RGB(238, 153, 172);

    this->bold = RGB(255, 255, 255);
}

ColoredText::~ColoredText()
{
    delete[] this->typeColors;
}

/* Member Functions */

std::string ColoredText::colorPokemonNames(const Pokemon *pokemon) const
{
    Types *types = pokemon->getTypes();
    std::string text = pokemon->getName();
    std::string output = "";

    for (us i = 0; i < text.length(); i++)
    {
        if (pokemon->getDualTyping())
            output += this->typeColors[static_cast<us>(types[i % 2])].colorString + text[i] + this->reset;
        else
            output += this->typeColors[static_cast<us>(types[0])].colorString + text[i] + this->reset;
    }

    return output;
}