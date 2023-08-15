/*! \file groundTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Ground Type x Mono Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/GroundType/groundTypeFixture.h"

TEST_F(GroundTypeMonoTypesTest, GroundxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeMonoTypesTest, GroundxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGround, FireType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GroundTypeMonoTypesTest, GroundxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, WaterType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeMonoTypesTest, GroundxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGround, ElectricType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GroundTypeMonoTypesTest, GroundxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGround, GrassType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GroundTypeMonoTypesTest, GroundxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, IceType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeMonoTypesTest, GroundxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, FightingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeMonoTypesTest, GroundxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGround, PoisonType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GroundTypeMonoTypesTest, GroundxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, GroundType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeMonoTypesTest, GroundxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesGround, FlyingType, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}

TEST_F(GroundTypeMonoTypesTest, GroundxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, PsychicType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeMonoTypesTest, GroundxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGround, BugType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GroundTypeMonoTypesTest, GroundxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGround, RockType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GroundTypeMonoTypesTest, GroundxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, GhostType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeMonoTypesTest, GroundxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, DragonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeMonoTypesTest, GroundxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, DarkType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeMonoTypesTest, GroundxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGround, SteelType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GroundTypeMonoTypesTest, GroundxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, FairyType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}