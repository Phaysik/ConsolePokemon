/*! \file fightingTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Fighting Type x Mono Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/FightingType/fightingTypeFixture.h"

TEST_F(FightingTypeMonoTypesTest, FightingxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFighting, NormalType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FightingTypeMonoTypesTest, FightingxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFighting, FireType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FightingTypeMonoTypesTest, FightingxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFighting, WaterType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FightingTypeMonoTypesTest, FightingxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFighting, ElectricType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FightingTypeMonoTypesTest, FightingxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFighting, GrassType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FightingTypeMonoTypesTest, FightingxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFighting, IceType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FightingTypeMonoTypesTest, FightingxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFighting, FightingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FightingTypeMonoTypesTest, FightingxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFighting, PoisonType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FightingTypeMonoTypesTest, FightingxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFighting, GroundType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FightingTypeMonoTypesTest, FightingxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFighting, FlyingType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FightingTypeMonoTypesTest, FightingxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFighting, PsychicType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FightingTypeMonoTypesTest, FightingxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFighting, BugType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FightingTypeMonoTypesTest, FightingxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFighting, RockType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FightingTypeMonoTypesTest, FightingxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesFighting, GhostType, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}

TEST_F(FightingTypeMonoTypesTest, FightingxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFighting, DragonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FightingTypeMonoTypesTest, FightingxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFighting, DarkType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FightingTypeMonoTypesTest, FightingxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFighting, SteelType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FightingTypeMonoTypesTest, FightingxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFighting, FairyType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}