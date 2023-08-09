/*! \file fireTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Fire Type x Mono Types.
    \date 08/06/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/FireType/fireTypeFixture.h"

TEST_F(FireTypeMonoTypesTest, FirexNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFire, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FireTypeMonoTypesTest, FirexFire)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFire, FireType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FireTypeMonoTypesTest, FirexWater)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFire, WaterType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FireTypeMonoTypesTest, FirexElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFire, ElectricType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FireTypeMonoTypesTest, FirexGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFire, GrassType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FireTypeMonoTypesTest, FirexIce)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFire, IceType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FireTypeMonoTypesTest, FirexFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFire, FightingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FireTypeMonoTypesTest, FirexPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFire, PoisonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FireTypeMonoTypesTest, FirexGround)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFire, GroundType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FireTypeMonoTypesTest, FirexFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFire, FlyingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FireTypeMonoTypesTest, FirexPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFire, PsychicType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FireTypeMonoTypesTest, FirexBug)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFire, BugType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FireTypeMonoTypesTest, FirexRock)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFire, RockType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FireTypeMonoTypesTest, FirexGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFire, GhostType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FireTypeMonoTypesTest, FirexDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFire, DragonType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FireTypeMonoTypesTest, FirexDark)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFire, DarkType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FireTypeMonoTypesTest, FirexSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFire, SteelType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FireTypeMonoTypesTest, FirexFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFire, FairyType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}