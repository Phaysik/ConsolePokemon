/*! \file types.h
    \brief Header file for getting type effectiveness.
    \details Contains the declarations for comparing types against one another.
    \date 12/18/2021
    \version 1.0
    \author Matthew Moore
*/

#pragma once

typedef unsigned short us; /*!< Shorthand for unsigned short */

#include <fstream>
#include <memory>
#include "typeEnums.h"

/*! \headerfile types.h
    \brief Type effectiveness
    \details How types stack up against one another.
    \date 12/18/2021
    \version 1.0
    \author Matthew Moore
*/
class TypeEffective
{
public:
    /* Constructors and Desctructors */

    /*! \brief Creates a type chart
        \details Creates a type chart based on the specifications of 'typechart.txt'
        \param typeToCheck Create a type chart for this specific type
        \pre The type must be part of #Types
        \post The type chart will be stored in a 2D array filled with #Effectiveness values
        \date 12/18/2021
        \version 1.0
        \author Matthew Moore
    */
    TypeEffective(const Types typeToCheck);

    /* Member Functions */

    /*! \brief Read the file 'typechart.txt'
        \details Using 'typechart.txt', create a type chart based on the contents of the file
        \pre Requires the type chart to already be allocated in memory
        \date 10/07/2021
        \version 1.0
        \author Matthew Moore
    */
    void readFile();

    /* Getters */

    /*! \brief Get type match up
        \details Get the type matchup of #typing against the type param
        \param type The type to get the matchup against
        \retval float How effect #typing is against the type param
        \pre The type param must be a valid #Types
        \date 10/07/2021
        \version 1.0
        \author Matthew Moore
    */
    float getMatchUp(const Types type) const;

private:
    us typeAmount;                                                 /*<! Amount of Pokemon types */
    Types typing;                                                  /*<! The typing of the Pokemon */
    std::unique_ptr<std::unique_ptr<Effectiveness[]>[]> typeChart; /*<! The 2D array of type matchups */
};