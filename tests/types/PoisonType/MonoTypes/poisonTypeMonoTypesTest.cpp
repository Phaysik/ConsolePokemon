/*! \file poisonTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Poison Type x Mono Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/PoisonType/poisonTypeFixture.h"

TEST_F(PoisonTypeMonoTypesTest, PoisonxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPoison, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPoison, FireType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPoison, WaterType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPoison, ElectricType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesPoison, GrassType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPoison, IceType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPoison, FightingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, PoisonType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, GroundType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPoison, FlyingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPoison, PsychicType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPoison, BugType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, RockType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, GhostType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPoison, DragonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPoison, DarkType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesPoison, SteelType, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}

TEST_F(PoisonTypeMonoTypesTest, PoisonxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesPoison, FairyType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}