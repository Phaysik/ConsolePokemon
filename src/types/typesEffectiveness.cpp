/*! \file types.cpp
    \brief C++ file for creating typecharts.
    \details Contains the function definitions for creating type charts on every type.
    \date 08/12/2023
    \version 1.0
    \author Matthew Moore
*/

#include "types/typeEffectiveness.h"

/* Constructers and Desctructors */

TypeEffective::TypeEffective() : typeAmount(Types::TYPES_MAX)
{
    readFile();
}

/* Member Functions */

void TypeEffective::readFile()
{
    std::ifstream file(TYPE_MATCH_UP_FILE);

    us val = 0;
    us inputAmount = 0;

    while (true)
    {
        if (file.eof())
        {
            break;
        }

        // Get next value from file
        file >> val;

        // Update the type chart
        if (val == 0)
        {
            this->typeChart[inputAmount / this->typeAmount][inputAmount % this->typeAmount] = Effectiveness::IMMUNE;
        }
        else if (val == 1)
        {
            this->typeChart[inputAmount / this->typeAmount][inputAmount % this->typeAmount] = Effectiveness::HALF;
        }
        else if (val == 2)
        {
            this->typeChart[inputAmount / this->typeAmount][inputAmount % this->typeAmount] = Effectiveness::NORMAL;
        }
        else
        {
            this->typeChart[inputAmount / this->typeAmount][inputAmount % this->typeAmount] = Effectiveness::SUPER;
        }

        ++inputAmount;
    }

    file.close();
}

/* Getters */

float TypeEffective::getMatchUp(const Types attackType, const PokemonTypes &opponentTypes) const
{
    // Determine effect of typing against type

    float effectiveness = 1;

    for (us i = 0; i < static_cast<us>(opponentTypes.getDualTyping()) + 1; ++i)
    {
        us effect = this->typeChart[attackType][i == 0 ? opponentTypes.getFirstType() : opponentTypes.getSecondType()];

        if (effect == Effectiveness::IMMUNE)
        {
            effectiveness *= 0;
        }
        else if (effect == Effectiveness::HALF)
        {
            effectiveness *= 0.5F;
        }
        else if (effect == Effectiveness::SUPER)
        {
            effectiveness *= 2;
        }
    }

    return effectiveness;
}