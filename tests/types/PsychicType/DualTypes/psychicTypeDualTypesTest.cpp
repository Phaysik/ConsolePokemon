/*! \file psychicTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Psychic Type x Dual Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/PsychicType/psychicTypeFixture.h"

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, PsychicxNormal, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, PsychicxFire, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, PsychicxWater, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, PsychicxElectric, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, PsychicxGrass, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, PsychicxIce, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, PsychicxFighting, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPsychic, PsychicxPoison, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, PsychicxGround, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, PsychicxFlying, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, PsychicxBug, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, PsychicxRock, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, PsychicxGhost, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, PsychicxDragon, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesPsychic, PsychicxDark, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesPsychic, PsychicxSteel, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(PsychicTypeDualTypesTest, PsychicxPsychicAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesPsychic, PsychicxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPsychic, PsychicxFairy, valueToEffectiveness(actualResult), Effectiveness::HALF);
}