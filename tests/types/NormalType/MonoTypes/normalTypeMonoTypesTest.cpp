/*! \file normalTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Normal Type x Mono Types.
    \date 08/06/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/NormalType/normalTypeFixture.h"

TEST_F(NormalTypeMonoTypesTest, NormalxNormal)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeMonoTypesTest, NormalxFire)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, FireType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeMonoTypesTest, NormalxWater)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, WaterType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeMonoTypesTest, NormalxElectric)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, ElectricType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeMonoTypesTest, NormalxGrass)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, GrassType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeMonoTypesTest, NormalxIce)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, IceType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeMonoTypesTest, NormalxFighting)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, FightingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeMonoTypesTest, NormalxPoison)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, PoisonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeMonoTypesTest, NormalxGround)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, GroundType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeMonoTypesTest, NormalxFlying)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, FlyingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeMonoTypesTest, NormalxPsychic)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, PsychicType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeMonoTypesTest, NormalxBug)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, BugType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeMonoTypesTest, NormalxRock)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesNormal, RockType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(NormalTypeMonoTypesTest, NormalxGhost)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesNormal, GhostType, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}

TEST_F(NormalTypeMonoTypesTest, NormalxDragon)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, DragonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeMonoTypesTest, NormalxDark)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, DarkType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeMonoTypesTest, NormalxSteel)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesNormal, SteelType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(NormalTypeMonoTypesTest, NormalxFairy)
{
    float actualResult = typeEffective.getMatchUp(TypesNormal, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, FairyType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}