/*! \file flyingTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Flying Type x Mono Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/FlyingType/flyingTypeFixture.h"

TEST_F(FlyingTypeMonoTypesTest, FlyingxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, FireType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, WaterType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFlying, ElectricType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFlying, GrassType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, IceType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFlying, FightingType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, PoisonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, GroundType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, FlyingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, PsychicType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFlying, BugType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFlying, RockType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, GhostType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, DragonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, DarkType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFlying, SteelType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FlyingTypeMonoTypesTest, FlyingxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, FairyType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}