/*! \file ghostTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Ghost Type x Mono Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/GhostType/ghostTypeFixture.h"

TEST_F(GhostTypeMonoTypesTest, GhostxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesGhost, NormalType, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}

TEST_F(GhostTypeMonoTypesTest, GhostxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, FireType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GhostTypeMonoTypesTest, GhostxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, WaterType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GhostTypeMonoTypesTest, GhostxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, ElectricType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GhostTypeMonoTypesTest, GhostxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, GrassType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GhostTypeMonoTypesTest, GhostxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, IceType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GhostTypeMonoTypesTest, GhostxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, FightingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GhostTypeMonoTypesTest, GhostxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, PoisonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GhostTypeMonoTypesTest, GhostxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, GroundType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GhostTypeMonoTypesTest, GhostxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, FlyingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GhostTypeMonoTypesTest, GhostxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, PsychicType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeMonoTypesTest, GhostxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, BugType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GhostTypeMonoTypesTest, GhostxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, RockType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GhostTypeMonoTypesTest, GhostxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeMonoTypesTest, GhostxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, DragonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GhostTypeMonoTypesTest, GhostxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGhost, DarkType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GhostTypeMonoTypesTest, GhostxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, SteelType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GhostTypeMonoTypesTest, GhostxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, FairyType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}