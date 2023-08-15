/*! \file bugTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Bug Type x Dual Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/BugType/bugTypeFixture.h"

TEST_F(BugTypeDualTypesTest, BugxBugAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, BugxNormal, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesBug, BugxFire, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, BugxWater, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, BugxElectric, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesBug, BugxGrass, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, BugxIce, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesBug, BugxFighting, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesBug, BugxPoison, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, BugxGround, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesBug, BugxFlying, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesBug, BugxPsychic, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, BugxRock, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesBug, BugxGhost, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesBug, BugxDragon, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesBug, BugxDark, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesBug, BugxSteel, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(BugTypeDualTypesTest, BugxBugAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesBug, BugxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesBug, BugxFairy, valueToEffectiveness(actualResult), Effectiveness::HALF);
}