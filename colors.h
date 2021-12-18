/*! \file colors.h
    \brief Header file for coloring text.
    \details Contains the function declarations for coloring text.
    \date 12/18/2021
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <string>
#include <memory>
#include "pokemon.h"
#include "typeEnums.h"

/*! \headerfile colors.h
    \brief Colors text
    \details Outputs colored text to the console based on the type that was passed in
    \date 10/12/2021
    \version 1.0
    \author Matthew Moore
*/
class ColoredText
{
public:
    /* Constructors and Destructors */

    ColoredText();

    /* Member Functions */

    /*! \brief Print some colored text
        \details Print some colored text based on the type of Pokemon passed in
        \param types The type(s) of the Pokemon
        \date 12/18/2021
        \version 1.0
        \author Matthew Moore
    */
    std::string colorPokemonNames(const std::unique_ptr<Pokemon> &pokemon) const;

private:
    std::unique_ptr<std::string[]> typeColors;
    std::string reset = "\033[0m";
};