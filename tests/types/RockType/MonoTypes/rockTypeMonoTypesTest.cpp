/*! \file rockTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Rock Type x Mono Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/RockType/rockTypeFixture.h"

TEST_F(RockTypeMonoTypesTest, RockxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeMonoTypesTest, RockxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesRock, FireType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(RockTypeMonoTypesTest, RockxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, WaterType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeMonoTypesTest, RockxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, ElectricType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeMonoTypesTest, RockxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, GrassType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeMonoTypesTest, RockxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesRock, IceType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(RockTypeMonoTypesTest, RockxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesRock, FightingType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(RockTypeMonoTypesTest, RockxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, PoisonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeMonoTypesTest, RockxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesRock, GroundType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(RockTypeMonoTypesTest, RockxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesRock, FlyingType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(RockTypeMonoTypesTest, RockxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, PsychicType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeMonoTypesTest, RockxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesRock, BugType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(RockTypeMonoTypesTest, RockxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, RockType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeMonoTypesTest, RockxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, GhostType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeMonoTypesTest, RockxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, DragonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeMonoTypesTest, RockxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, DarkType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeMonoTypesTest, RockxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesRock, SteelType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(RockTypeMonoTypesTest, RockxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, FairyType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}