/*
 * @file typeEnums.h
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/20/2021
 * @brief The enums for Types and Effectiveness
*/

#ifndef TYPEENUMS_H
#define TYPEENUMS_H

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

enum Effectiveness
{
    NOE,
    NVE,
    NE,
    SE
};

#endif