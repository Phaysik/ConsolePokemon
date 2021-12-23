/*! \file types.cpp
    \brief C++ file for creating typecharts.
    \details Contains the function definitions for creating type charts on every type.
    \date 12/23/2021
    \version 1.0
    \author Matthew Moore
*/

#include <types/types.h>

/* Constructers and Desctructors */

TypeEffective::TypeEffective(const Types typeToCheck)
{
    this->typeAmount = Types::TYPES_MAX;
    this->typing = typeToCheck;

    this->typeChart = new Effectiveness *[this->typeAmount];

    for (us i = 0; i < this->typeAmount; ++i)
        this->typeChart[i] = new Effectiveness[this->typeAmount];

    readFile();
}

TypeEffective::~TypeEffective()
{
    for (us i = 0; i < typeAmount; ++i)
        delete[] this->typeChart[i];

    delete[] this->typeChart;
}

/* Member Functions */

void TypeEffective::readFile()
{
    std::ifstream file("typechart.txt");

    us val, inputAmount = 0;

    while (!file.eof())
    {
        // Get next value from file
        file >> val;

        // Update the type chart
        if (val == 0)
            this->typeChart[inputAmount / this->typeAmount][inputAmount % this->typeAmount] = Effectiveness::NOE;
        else if (val == 1)
            this->typeChart[inputAmount / this->typeAmount][inputAmount % this->typeAmount] = Effectiveness::NVE;
        else if (val == 2)
            this->typeChart[inputAmount / this->typeAmount][inputAmount % this->typeAmount] = Effectiveness::NE;
        else if (val == 3)
            this->typeChart[inputAmount / this->typeAmount][inputAmount % this->typeAmount] = Effectiveness::SE;

        ++inputAmount;
    }

    file.close();
}

/* Getters */

float TypeEffective::getMatchUp(const Types type) const
{
    // Determine effect of typing against type
    us effect = this->typeChart[type][this->typing];

    if (effect == Effectiveness::NOE)
        return 0;
    else if (effect == Effectiveness::NVE)
        return 0.5;
    else if (effect == Effectiveness::SE)
        return 2;

    return 1;
}