/*! \file pokemonTypes.h
    \brief Header file for creating a Pokemon's types
    \details Contains the function declarations for creating a Pokemon's types
    \date 08/05/2023
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include "types/typeEnums.h"

/*! \headerfile pokemonTypes.h
    \brief The types of the #Pokemon
    \details Creates the properties of a Pokemon's type
    \date 08/05/2023
    \version 1.0
    \author Matthew Moore
*/
class PokemonTypes
{
public:
    /* Constructors and Destructors */

    /*! \brief Default constructor
        \date 08/05/2023
        \version 1.0
        \author Matthew Moore
    */
    inline PokemonTypes() = default;

    /*! \brief One/Two #Pokemon types
        \pre The firstType and secondType params must be a valid #Types.
        \post #dualTyping is set to true or false depending on if the secondType param doesn't default.
        \param firstType[in] The first type of the #Pokemon
        \param secondType[in] The second type of the #Pokemon
        \date 08/05/2023
        \version 1.0
        \author Matthew Moore
    */
    PokemonTypes(const Types firstType, const Types secondType = Types::NO_TYPE) : typeOne(firstType), typeTwo(secondType), dualTyping(secondType != Types::NO_TYPE) {}

    /*! \brief Copy Constructor
        \pre The rhs param must be a valid #PokemonTypes object.
        \post #typeOne, #typeTwo, and #dualTyping will be initialized based off the rhs param member variables.
        \param rhs[in] The #PokemonTypes object to copy
        \date 08/05/2023
        \version 1.0
        \author Matthew Moore
    */
    PokemonTypes(const PokemonTypes &rhs);

    /* Getters */

    /*! \brief Get if the #Pokemon has dual typing
        \date 08/05/2023
        \version 1.0
        \author Matthew Moore
        \return bool If the #Pokemon has dual typing
    */
    bool getDualTyping() const;

    /*! \brief Gets the first type of the #Pokemon
        \date 08/05/2023
        \version 1.0
        \author Matthew Moore
        \return Types The first type of the #Pokemon
    */
    Types getFirstType() const;

    /*! \brief Gets the second type of the #Pokemon
        \date 08/05/2023
        \version 1.0
        \author Matthew Moore
        \return Types The second type of the #Pokemon
    */
    Types getSecondType() const;

    /* Overloaded Operators */

    /*! \brief Overload operator=
        \details Will allow chaining for DualTypes class types
        \param types[in] The types of the #Pokemon
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return DualTypes A clone of the types param
    */
    PokemonTypes &operator=(const PokemonTypes &types);

private:
    Types typeOne;   /*!< The first type of the #Pokemon */
    Types typeTwo;   /*!< The second type of the #Pokemon */
    bool dualTyping; /*!< Whether or not the Pokemon has two types */
};