/*! \file colors.h
    \brief Header file for coloring text.
    \details Contains the function declarations for coloring text.
    \date 08/05/2023
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <ncurses.h>
#include <cstdint>
#include <string>

#include "trainer/pokemon/pokemon.h"
#include "types/typeEnums.h"

using us = uint16_t; /*!< Shorthand for unsigned short */

class Pokemon;

// For ncurses init_color function

#define NORMAL_COLOR 9
#define FIRE_COLOR 10
#define WATER_COLOR 11
#define ELECTRIC_COLOR 12
#define GRASS_COLOR 13
#define ICE_COLOR 14
#define FIGHTING_COLOR 15
#define POISON_COLOR 16
#define GROUND_COLOR 17
#define FLYING_COLOR 18
#define PSYCHIC_COLOR 19
#define BUG_COLOR 21
#define ROCK_COLOR 22
#define GHOST_COLOR 23
#define DRAGON_COLOR 24
#define DARK_COLOR 25
#define STEEL_COLOR 26
#define FAIRY_COLOR 27

/*! \headerfile colors.h
    \brief Colors text
    \details Outputs colored text to the console based on the type that was passed in
    \date 08/05/2023
    \version 1.0
    \author Matthew Moore
*/
class ColoredText
{
public:
    /* Constructors and Destructors */

    /*! \brief Construct the rgb colors for the types
        \date 12/22/2021
        \version 1.0
        \author Matthew Moore
    */
    ColoredText();

    /*! \brief Delete #typeColors allocated memory
        \date 12/19/2021
        \version 1.0
        \author Matthew Moore
    */
    ~ColoredText();

    /* Member Functions */

    /*! \brief Initializes the ncurses color pairs
        \pre The param #typeColor must match one of the predefined XXX_COLOR values
        \post Color pairs will be initalized
        \param typeColor[in] The color of the type to initialize
        \param red[in] The red of the color
        \param green[in] The green of the color
        \param blue[in] The bluegreen of the color
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return us The type color requested
    */
    us initColors(const us typeColor, const us red, const us green, const us blue);

    /*! \brief Print some colored text
        \details Print some colored text based on the type of Pokemon passed in
        \param pokemon[in] The Pokemon's name to color
        \date 08/05/2023
        \version 1.0
        \author Matthew Moore
    */
    void colorPokemonNames(Pokemon *pokemon) const;

private:
    us *typeColors; /*!< The colors for each Pokemon type */
};
