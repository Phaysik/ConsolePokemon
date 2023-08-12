/*! \file pokemonTypes.cpp
    \brief C++ file for creating Pokemon types.
    \details Contains the function definitions for creating Pokemon types
    \date 08/11/2023
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