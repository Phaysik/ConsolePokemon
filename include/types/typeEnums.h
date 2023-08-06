/*! \file typeEnums.h
    \brief Header file for dealing with types.
    \details Contains the enums for BattleType and Types.
    \date 08/05/2023
    \version 1.0
    \author Matthew Moore
*/

#pragma once

/*! \brief All the %Pokemon battle's possible states
    \date 10/07/2021
    \version 1.0
    \author Matthew Moore
*/
enum BattleType
{
    Single,
    Double,
    Triple,
    Quadruple,
    Quintuple,
    Sextuple
};

/*! \brief All the Pokemon's Possible Types
    \date 08/05/2023
    \version 1.0
    \author Matthew Moore
*/
enum Types
{
    Normal,
    Fire,
    Water,
    Electric,
    Grass,
    Ice,
    Fighting,
    Poison,
    Ground,
    Flying,
    Psychic,
    Bug,
    Rock,
    Ghost,
    Dragon,
    Dark,
    Steel,
    Fairy,
    TYPES_MAX,
    NO_TYPE
};

/*! \brief All the Pokemon types possible effectivenesses
    \date 08/05/2023
    \version 1.0
    \author Matthew Moore
*/
enum Effectiveness
{
    IMMUNE, /*!< Not effective */
    QUART,  /*!< Not very effective (1/4) */
    HALF,   /*!< Not very effective (1/2) */
    NORMAL, /*!< Normal effective */
    SUPER,  /*!< Super effective (2x) */
    QUAD    /*!< Super effective (4x) */
};
