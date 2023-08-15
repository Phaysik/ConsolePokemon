/*! \file fairyTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Fairy Type x Dual Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/FairyType/fairyTypeFixture.h"

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, FairyxNormal, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFairy, FairyxFire, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, FairyxWater, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, FairyxElectric, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, FairyxGrass, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, FairyxIce, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFairy, FairyxFighting, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFairy, FairyxPoison, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, FairyxGround, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, FairyxFlying, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, FairyxPsychic, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, FairyxBug, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, FairyxRock, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFairy, FairyxGhost, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFairy, FairyxDragon, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFairy, FairyxDark, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FairyTypeDualTypesTest, FairyxFairyAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesFairy, FairyxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFairy, FairyxSteel, valueToEffectiveness(actualResult), Effectiveness::HALF);
}