/*! \file bugTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Bug Type x Mono Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/BugType/bugTypeFixture.h"

TEST_F(BugTypeMonoTypesTest, BugxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeMonoTypesTest, BugxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesBug, FireType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(BugTypeMonoTypesTest, BugxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, WaterType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeMonoTypesTest, BugxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, ElectricType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeMonoTypesTest, BugxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesBug, GrassType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(BugTypeMonoTypesTest, BugxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, IceType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeMonoTypesTest, BugxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesBug, FightingType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(BugTypeMonoTypesTest, BugxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesBug, PoisonType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(BugTypeMonoTypesTest, BugxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, GroundType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeMonoTypesTest, BugxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesBug, FlyingType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(BugTypeMonoTypesTest, BugxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesBug, PsychicType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(BugTypeMonoTypesTest, BugxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, BugType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeMonoTypesTest, BugxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, RockType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeMonoTypesTest, BugxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesBug, GhostType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(BugTypeMonoTypesTest, BugxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, DragonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeMonoTypesTest, BugxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesBug, DarkType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(BugTypeMonoTypesTest, BugxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesBug, SteelType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(BugTypeMonoTypesTest, BugxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesBug, FairyType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}