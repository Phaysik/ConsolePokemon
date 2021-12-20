/*! \file colors.h
    \brief Header file for coloring text.
    \details Contains the function declarations for coloring text.
    \date 12/19/2021
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <cstdint>
#include <string>
#include "pokemon.h"
#include "typeEnums.h"

typedef uint16_t us; /*!< Shorthand for unsigned short */

/*! \headerfile colors.h
    \brief Colors text
    \details Outputs colored text to the console based on the type that was passed in
    \date 12/19/2021
    \version 1.0
    \author Matthew Moore
*/
class ColoredText
{
    /*! \headerfile colors.h
        \brief Handle color of console text
        \date 12/19/2021
        \version 1.0
        \author Matthew Moore
    */
    struct RGB
    {
        /*! \brief Default constructor
            \date 12/19/2021
            \version 1.0
            \author Matthew Moore
        */
        RGB() {}

        /*! \brief Construct the rgb color string
            \param red Red color value
            \param green Green color value
            \param blue Blue color value
            \date 12/19/2021
            \version 1.0
            \author Matthew Moore
        */
        RGB(us red, us green, us blue) : colorString("\033[38;2;" + std::to_string(static_cast<int>(red)) + ";" + std::to_string(static_cast<int>(green)) + ";" + std::to_string(static_cast<int>(blue)) + "m") {}

        std::string colorString; /*!< The color string */
    };

public:
    /* Constructors and Destructors */

    /*! \brief Construct the rgb colors for the types
        \date 12/19/2021
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

    /*! \brief Print some colored text
        \details Print some colored text based on the type of Pokemon passed in
        \param types The type(s) of the Pokemon
        \date 10/19/2021
        \version 1.0
        \author Matthew Moore
    */
    std::string colorPokemonNames(const Pokemon *pokemon) const;

private:
    RGB *typeColors;               /*!< The colors for each Pokemon type */
    RGB bold;                      /*!< RGB for white bolded text */
    std::string reset = "\033[0m"; /*!< Reset the console color back to default */
};
