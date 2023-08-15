/*! \file grassTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Grass Type x Mono Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/GrassType/grassTypeFixture.h"

TEST_F(GrassTypeMonoTypesTest, GrassxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGrass, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GrassTypeMonoTypesTest, GrassxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, FireType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GrassTypeMonoTypesTest, GrassxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGrass, WaterType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GrassTypeMonoTypesTest, GrassxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGrass, ElectricType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GrassTypeMonoTypesTest, GrassxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, GrassType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GrassTypeMonoTypesTest, GrassxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGrass, IceType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GrassTypeMonoTypesTest, GrassxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGrass, FightingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GrassTypeMonoTypesTest, GrassxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, PoisonType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GrassTypeMonoTypesTest, GrassxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGrass, GroundType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GrassTypeMonoTypesTest, GrassxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, FlyingType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GrassTypeMonoTypesTest, GrassxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGrass, PsychicType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GrassTypeMonoTypesTest, GrassxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, BugType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GrassTypeMonoTypesTest, GrassxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGrass, RockType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GrassTypeMonoTypesTest, GrassxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGrass, GhostType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GrassTypeMonoTypesTest, GrassxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, DragonType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GrassTypeMonoTypesTest, GrassxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGrass, DarkType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GrassTypeMonoTypesTest, GrassxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, SteelType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GrassTypeMonoTypesTest, GrassxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGrass, FairyType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}