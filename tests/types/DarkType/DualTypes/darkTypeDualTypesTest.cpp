/*! \file darkTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Dark Type x Dual Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/DarkType/darkTypeFixture.h"

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, DarkxNormal, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, DarkxFire, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, DarkxWater, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, DarkxElectric, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, DarkxGrass, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, DarkxIce, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesDark, DarkxFighting, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, DarkxPoison, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, DarkxGround, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, DarkxFlying, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, DarkxPsychic, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, DarkxBug, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, DarkxRock, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDark, DarkxGhost, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, DarkxDragon, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesDark, DarkxSteel, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(DarkTypeDualTypesTest, DarkxDarkAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesDark, DarkxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesDark, DarkxFairy, valueToEffectiveness(actualResult), Effectiveness::QUART);
}