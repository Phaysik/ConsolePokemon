/*! \file psychicTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Psychic Type x Mono Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/PsychicType/psychicTypeFixture.h"

TEST_F(PsychicTypeMonoTypesTest, PsychicxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, FireType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, WaterType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, ElectricType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, GrassType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, IceType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesPsychic, FightingType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesPsychic, PoisonType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, GroundType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, FlyingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, PsychicType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, BugType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, RockType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, GhostType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, DragonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesPsychic, DarkType, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, SteelType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PsychicTypeMonoTypesTest, PsychicxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, FairyType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}