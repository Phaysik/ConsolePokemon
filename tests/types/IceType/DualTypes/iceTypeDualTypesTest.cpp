/*! \file iceTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Ice Type x Dual Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/IceType/iceTypeFixture.h"

TEST_F(IceTypeDualTypesTest, IcexIceAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesIce, IcexNormal, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesIce, IcexFire, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesIce, IcexWater, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesIce, IcexElectric, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesIce, IcexGrass, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesIce, IcexFighting, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesIce, IcexPoison, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesIce, IcexGround, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesIce, IcexFlying, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesIce, IcexPsychic, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesIce, IcexBug, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesIce, IcexRock, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesIce, IcexGhost, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesIce, IcexDragon, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesIce, IcexDark, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesIce, IcexSteel, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(IceTypeDualTypesTest, IcexIceAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IcexFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesIce, IcexFairy, valueToEffectiveness(actualResult), Effectiveness::HALF);
}