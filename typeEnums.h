/*! \file typeEnums.h
    \brief Header file for dealing with types.
    \details Contains the enums for BattleType and Types.
    \date 10/07/2021
    \version 1.0
    \author Matthew Moore
*/

#ifndef TYPEENUMS_H
#define TYPEENUMS_H

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
    \date 10/07/2021
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
    TYPES_MAX
};

/*! \brief All the Pokemon types possible effectivenesses
    \date 10/07/2021
    \version 1.0
    \author Matthew Moore
*/
enum Effectiveness
{
    NOE, /*!< Not effective */
    NVE, /*!< Not very effective */
    NE,  /*!< Normal effective */
    SE   /*!< Super effective */
};
#endif