/*! \file darkTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Dark Type x Mono Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/DarkType/darkTypeFixture.h"

TEST_F(DarkTypeMonoTypesTest, DarkxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeMonoTypesTest, DarkxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, FireType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeMonoTypesTest, DarkxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, WaterType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeMonoTypesTest, DarkxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, ElectricType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeMonoTypesTest, DarkxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, GrassType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeMonoTypesTest, DarkxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, IceType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeMonoTypesTest, DarkxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, FightingType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeMonoTypesTest, DarkxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, PoisonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeMonoTypesTest, DarkxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, GroundType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeMonoTypesTest, DarkxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, FlyingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeMonoTypesTest, DarkxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDark, PsychicType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DarkTypeMonoTypesTest, DarkxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, BugType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeMonoTypesTest, DarkxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, RockType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeMonoTypesTest, DarkxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDark, GhostType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DarkTypeMonoTypesTest, DarkxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, DragonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeMonoTypesTest, DarkxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, DarkType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeMonoTypesTest, DarkxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, SteelType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeMonoTypesTest, DarkxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, FairyType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}