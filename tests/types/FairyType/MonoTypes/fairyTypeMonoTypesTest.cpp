/*! \file fairyTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Fairy Type x Mono Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/FairyType/fairyTypeFixture.h"

TEST_F(FairyTypeMonoTypesTest, FairyxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeMonoTypesTest, FairyxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFairy, FireType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FairyTypeMonoTypesTest, FairyxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, WaterType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeMonoTypesTest, FairyxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, ElectricType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeMonoTypesTest, FairyxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, GrassType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeMonoTypesTest, FairyxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, IceType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeMonoTypesTest, FairyxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFairy, FightingType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FairyTypeMonoTypesTest, FairyxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFairy, PoisonType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FairyTypeMonoTypesTest, FairyxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, GroundType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeMonoTypesTest, FairyxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, FlyingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeMonoTypesTest, FairyxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, PsychicType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeMonoTypesTest, FairyxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, BugType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeMonoTypesTest, FairyxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, RockType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeMonoTypesTest, FairyxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, GhostType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeMonoTypesTest, FairyxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFairy, DragonType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FairyTypeMonoTypesTest, FairyxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFairy, DarkType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FairyTypeMonoTypesTest, FairyxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFairy, SteelType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FairyTypeMonoTypesTest, FairyxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, FairyType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}