/*! \file pokemonTypes.cpp
    \brief C++ file for creating Pokemon types.
    \details Contains the function definitions for creating Pokemon types
    \date 08/05/2023
    \version 1.0
    \author Matthew Moore
*/

#include "types/pokemonTypes.h"

/* Constructors and Destructors */

PokemonTypes::PokemonTypes(const PokemonTypes &rhs)
{
    *this = rhs;
}

/* Getters */

bool PokemonTypes::getDualTyping() const
{
    return this->dualTyping;
}

Types PokemonTypes::getFirstType() const
{
    return this->typeOne;
}

Types PokemonTypes::getSecondType() const
{
    return this->typeTwo;
}

PokemonTypes &PokemonTypes::operator=(const PokemonTypes &types)
{
    this->typeOne = types.typeOne;
    this->typeTwo = types.typeTwo;
    this->dualTyping = types.dualTyping;

    return *this;
}