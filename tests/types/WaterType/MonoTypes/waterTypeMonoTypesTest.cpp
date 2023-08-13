/*! \file waterTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Water Type x Mono Types.
    \date 08/12/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/WaterType/waterTypeFixture.h"

TEST_F(WaterTypeMonoTypesTest, WaterxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(WaterTypeMonoTypesTest, WaterxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesWater, FireType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(WaterTypeMonoTypesTest, WaterxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, WaterType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(WaterTypeMonoTypesTest, WaterxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, ElectricType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(WaterTypeMonoTypesTest, WaterxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, GrassType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(WaterTypeMonoTypesTest, WaterxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, IceType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(WaterTypeMonoTypesTest, WaterxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, FightingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(WaterTypeMonoTypesTest, WaterxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, PoisonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(WaterTypeMonoTypesTest, WaterxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesWater, GroundType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(WaterTypeMonoTypesTest, WaterxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, FlyingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(WaterTypeMonoTypesTest, WaterxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, PsychicType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(WaterTypeMonoTypesTest, WaterxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, BugType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(WaterTypeMonoTypesTest, WaterxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesWater, RockType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(WaterTypeMonoTypesTest, WaterxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, GhostType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(WaterTypeMonoTypesTest, WaterxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, DragonType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(WaterTypeMonoTypesTest, WaterxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, DarkType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(WaterTypeMonoTypesTest, WaterxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, SteelType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(WaterTypeMonoTypesTest, WaterxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, FairyType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}