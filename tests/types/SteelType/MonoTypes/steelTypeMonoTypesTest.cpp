/*! \file steelTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Steel Type x Mono Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/SteelType/steelTypeFixture.h"

TEST_F(SteelTypeMonoTypesTest, SteelxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesSteel, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(SteelTypeMonoTypesTest, SteelxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, FireType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeMonoTypesTest, SteelxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, WaterType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeMonoTypesTest, SteelxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, ElectricType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeMonoTypesTest, SteelxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesSteel, GrassType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(SteelTypeMonoTypesTest, SteelxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesSteel, IceType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(SteelTypeMonoTypesTest, SteelxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesSteel, FightingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(SteelTypeMonoTypesTest, SteelxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesSteel, PoisonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(SteelTypeMonoTypesTest, SteelxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesSteel, GroundType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(SteelTypeMonoTypesTest, SteelxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesSteel, FlyingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(SteelTypeMonoTypesTest, SteelxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesSteel, PsychicType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(SteelTypeMonoTypesTest, SteelxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesSteel, BugType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(SteelTypeMonoTypesTest, SteelxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesSteel, RockType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(SteelTypeMonoTypesTest, SteelxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesSteel, GhostType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(SteelTypeMonoTypesTest, SteelxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesSteel, DragonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(SteelTypeMonoTypesTest, SteelxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesSteel, DarkType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(SteelTypeMonoTypesTest, SteelxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, SteelType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeMonoTypesTest, SteelxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesSteel, FairyType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}