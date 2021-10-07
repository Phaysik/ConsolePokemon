/*
 * @file types.cpp
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/20/2021
 * @brief The class declaration for the TypeEffective class
*/

#include "types.h"

TypeEffective::TypeEffective(const Types typeToCheck)
{
    this->typeAmount = TYPES_MAX;
    this->typing = typeToCheck;
    this->typeChart = new Effectiveness *[this->typeAmount];
    for (us i = 0; i < this->typeAmount; ++i)
        this->typeChart[i] = new Effectiveness[this->typeAmount];

    readFile();
}

void TypeEffective::readFile()
{
    std::ifstream file("typechart.txt");
    us val;
    us inputAmount = 0;
    while (!file.eof())
    {
        file >> val;
        if (val == 0)
            this->typeChart[inputAmount / this->typeAmount][inputAmount % this->typeAmount] = NOE;
        else if (val == 1)
            this->typeChart[inputAmount / this->typeAmount][inputAmount % this->typeAmount] = NVE;
        else if (val == 2)
            this->typeChart[inputAmount / this->typeAmount][inputAmount % this->typeAmount] = NE;
        else if (val == 3)
            this->typeChart[inputAmount / this->typeAmount][inputAmount % this->typeAmount] = SE;

        ++inputAmount;
    }
    file.close();
}

TypeEffective::~TypeEffective()
{
    for (us i = 0; i < typeAmount; ++i)
        delete[] this->typeChart[i];

    delete[] this->typeChart;
}

float TypeEffective::getMatchUp(const Types type) const
{
    us effect = this->typeChart[type][this->typing];
    if (effect == NOE)
        return 0;
    else if (effect == NVE)
        return 0.5;
    else if (effect == SE)
        return 2;
    return 1;
}