/*! \file types.h
    \brief Header file for getting type effectiveness.
    \details Contains the declarations for comparing types against one another.
    \date 08/12/2023
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <fstream>
#include <array>

#include "constants.h"
#include "aliases.h"
#include "types/typeEnums.h"
#include "types/pokemonTypes.h"

/*! \headerfile types.h
    \brief Type effectiveness
    \details How types stack up against one another.
    \date 08/11/2023
    \version 1.0
    \author Matthew Moore
*/
class TypeEffective
{
public:
    /* Constructors and Desctructors */

    /*! \brief Creates a type chart
        \details Creates a type chart based on the specifications of 'typechart.txt'
        \post The type chart will be stored in a 2D array filled with #Effectiveness values
        \date 08/03/2023
        \version 1.0
        \author Matthew Moore
    */
    TypeEffective();

    /* Member Functions */

    /*! \brief Read the file 'typechart.txt'
        \details Using 'typechart.txt', create a type chart based on the contents of the file
        \pre Requires the type chart to already be allocated in memory
        \date 04/09/2022
        \version 1.0
        \author Matthew Moore
    */
    void readFile();

    /* Getters */

    /*! \brief Get type match up
        \details Get the type matchup of a move against the enemy #Pokemon types
        \param attackType[in] The type to get the matchup against
        \param opponentTypes[in] The type(s) of the enemy #Pokemon
        \pre The attackType param must be a valid #Types.
        \date 08/06/2023
        \version 1.0
        \author Matthew Moore
        \return float How effective the move is against the enemy #Pokemon
    */
    float getMatchUp(const Types attackType, const PokemonTypes &opponentTypes) const;

private:
    us typeAmount;                                                                       /*!< Amount of Pokemon types */
    std::array<std::array<Effectiveness, Types::TYPES_MAX>, Types::TYPES_MAX> typeChart; /*!< The 2D array of type matchups */
};
