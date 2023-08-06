/*! \file normalTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Normal Type x Dual Types.
    \date 08/06/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/NormalType/normalTypeFixture.h"

TypeEffective *TypeEffectivenessTest::typeEffective = nullptr;

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalxFire, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalxWater, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalxElectric, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalxGrass, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalxIce, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalxFighting, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalxPoison, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalxGround, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalxFlying, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalxPsychic, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalxBug, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesNormal, NormalxRock, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesNormal, NormalxGhost, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalxDragon, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalxDark, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesNormal, NormalxSteel, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(NormalTypeDualTypesTest, NormalxNormalAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesNormal, NormalxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesNormal, NormalxFairy, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}