/*
 * @file types.h
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/20/2021
 * @brief The class definition for the TypeEffective class
*/

#ifndef TYPES_H
#define TYPES_H

#ifndef us
#define us unsigned short
#endif

#include <fstream>
#include "typeEnums.h"

class TypeEffective
{
public:
    TypeEffective(Types typing);
    ~TypeEffective();

    void readFile();

    float getMatchUp(us j) const;

private:
    us typeAmount;
    us typeCount;
    Types typing;
    Effectiveness **typeChart;
};

#endif