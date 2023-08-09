/*! \file typeFixture.cpp
    \brief C++ file for creating a typeFixture.
    \details Contains the function definitions for creating a test fixture for TypeEffectiveness
    \date 08/06/2023
    \version 1.0
    \author Matthew Moore
*/

#include "TypeEffectiveness/typeFixture.h"

TypeEffective *TypeEffectivenessTest::typeEffective = nullptr;

/* Overrides */

void TypeEffectivenessTest::SetUp()
{
    this->mapTypesToTypeNames[0] = "Normal";
    this->mapTypesToTypeNames[1] = "Fire";
    this->mapTypesToTypeNames[2] = "Water";
    this->mapTypesToTypeNames[3] = "Electric";
    this->mapTypesToTypeNames[4] = "Grass";
    this->mapTypesToTypeNames[5] = "Ice";
    this->mapTypesToTypeNames[6] = "Fighting";
    this->mapTypesToTypeNames[7] = "Poison";
    this->mapTypesToTypeNames[8] = "Ground";
    this->mapTypesToTypeNames[9] = "Flying";
    this->mapTypesToTypeNames[10] = "Psychic";
    this->mapTypesToTypeNames[11] = "Bug";
    this->mapTypesToTypeNames[12] = "Rock";
    this->mapTypesToTypeNames[13] = "Ghost";
    this->mapTypesToTypeNames[14] = "Dragon";
    this->mapTypesToTypeNames[15] = "Dark";
    this->mapTypesToTypeNames[16] = "Steel";
    this->mapTypesToTypeNames[17] = "Fairy";

    this->mapEffectivenessToTypeName[0] = "Not Effective";
    this->mapEffectivenessToTypeName[1] = "Not very effective (1/4)";
    this->mapEffectivenessToTypeName[2] = "Not very effective (1/2)";
    this->mapEffectivenessToTypeName[3] = "Normal Effective";
    this->mapEffectivenessToTypeName[4] = "Super Effective (2x)";
    this->mapEffectivenessToTypeName[5] = "Super Effective (4x)";

    this->mapFloatToEffectivenessTypeName[0] = Effectiveness::IMMUNE;
    this->mapFloatToEffectivenessTypeName[25] = Effectiveness::QUART;
    this->mapFloatToEffectivenessTypeName[50] = Effectiveness::HALF;
    this->mapFloatToEffectivenessTypeName[100] = Effectiveness::NORMAL;
    this->mapFloatToEffectivenessTypeName[200] = Effectiveness::SUPER;
    this->mapFloatToEffectivenessTypeName[400] = Effectiveness::QUAD;

    this->mapEffectivenessToValue[0] = 0;
    this->mapEffectivenessToValue[1] = 0.25f;
    this->mapEffectivenessToValue[2] = 0.5f;
    this->mapEffectivenessToValue[3] = 1;
    this->mapEffectivenessToValue[4] = 2;
    this->mapEffectivenessToValue[5] = 4;
}

/* Member Functions */

std::string TypeEffectivenessTest::errorLog(const Types attackType, const PokemonTypes &opponentTypes, const Effectiveness actual, const Effectiveness expected)
{
    std::string result = "The type effectiveness of " + this->mapTypesToTypeNames[attackType] + " -> { ";

    for (int i = 0; i < opponentTypes.getDualTyping() + 1; ++i)
    {
        result += this->mapTypesToTypeNames[i == 0 ? opponentTypes.getFirstType() : opponentTypes.getSecondType()];

        if (opponentTypes.getDualTyping() && i == 0)
            result += ", ";
    }

    result += " } is " + this->mapEffectivenessToTypeName[actual] + ", when it should be " + this->mapEffectivenessToTypeName[expected];

    return result;
}

float TypeEffectivenessTest::effectivenessToValue(const Effectiveness effectiveness)
{
    return this->mapEffectivenessToValue[effectiveness];
}

Effectiveness TypeEffectivenessTest::valueToEffectiveness(const float effectivenessValue)
{
    return this->mapFloatToEffectivenessTypeName[static_cast<int>(effectivenessValue * 100)];
}