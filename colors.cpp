/*! \file colors.cpp
    \brief C++ file for coloring text.
    \details Contains the function definitions for coloring text.
    \date 10/12/2021
    \version 1.0
    \author Matthew Moore
*/

#include "colors.h"

/* Constructors and Destructors */

ColoredText::ColoredText()
{
    this->typeColors = new std::string[TYPES_MAX];
    this->typeColors[0] = "\033[38;5;7m";
    this->typeColors[1] = "\033[38;5;202m";
    this->typeColors[2] = "\033[38;5;12m";
    this->typeColors[3] = "\033[38;5;11m";
    this->typeColors[4] = "\033[38;5;10m";
    this->typeColors[5] = "\033[38;5;117m";
    this->typeColors[6] = "\033[38;5;124m";
    this->typeColors[7] = "\033[38;5;5m";
    this->typeColors[8] = "\033[38;5;223m";
    this->typeColors[9] = "\033[38;5;111m";
    this->typeColors[10] = "\033[38;5;199m";
    this->typeColors[11] = "\033[38;5;70m";
    this->typeColors[12] = "\033[38;5;138m";
    this->typeColors[13] = "\033[38;5;55m";
    this->typeColors[14] = "\033[38;5;57m";
    this->typeColors[15] = "\033[38;5;239m";
    this->typeColors[16] = "\033[38;5;195m";
    this->typeColors[17] = "\033[38;5;219m";
}

ColoredText::~ColoredText()
{
    delete[] this->typeColors;
}

/* Member Functions */

std::string ColoredText::colorPokemonNames(Pokemon *pokemon)
{
    Types *types = pokemon->getTypes();
    std::string text = pokemon->getName();
    std::string output = "";

    for (us i = 0; i < text.length(); i++)
    {
        if (pokemon->getDualTyping())
            output += this->typeColors[static_cast<us>(types[i % 2])] + text[i] + this->reset;
        else
            output += this->typeColors[static_cast<us>(types[0])] + text[i] + this->reset;
    }

    return output;
}