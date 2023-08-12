/*! \file fireTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Fire Type x Dual Types.
    \date 08/08/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/FireType/fireTypeFixture.h"

TEST_F(FireTypeDualTypesTest, FirexFireAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFire, FirexNormal, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesFire, FirexWater, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFire, FirexElectric, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFire, FirexGrass, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFire, FirexIce, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFire, FirexFighting, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFire, FirexPoison, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFire, FirexGround, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFire, FirexFlying, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFire, FirexPsychic, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFire, FirexBug, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesFire, FirexRock, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFire, FirexGhost, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesFire, FirexDragon, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFire, FirexDark, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFire, FirexSteel, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FireTypeDualTypesTest, FirexFireAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesFire, FirexFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFire, FirexFairy, valueToEffectiveness(actualResult), Effectiveness::HALF);
}