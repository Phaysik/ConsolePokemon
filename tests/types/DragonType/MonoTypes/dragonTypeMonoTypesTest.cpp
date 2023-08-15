/*! \file dragonTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Dragon Type x Mono Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/DragonType/dragonTypeFixture.h"

TEST_F(DragonTypeMonoTypesTest, DragonxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, FireType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, WaterType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, ElectricType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, GrassType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, IceType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, FightingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, PoisonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, GroundType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, FlyingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, PsychicType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, BugType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, RockType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, GhostType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeMonoTypesTest, DragonxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, DarkType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeMonoTypesTest, DragonxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDragon, SteelType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DragonTypeMonoTypesTest, DragonxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesDragon, FairyType, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}