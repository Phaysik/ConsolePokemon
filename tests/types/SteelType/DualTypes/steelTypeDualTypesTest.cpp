/*! \file steelTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Steel Type x Dual Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/SteelType/steelTypeFixture.h"

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, SteelxNormal, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesSteel, SteelxFire, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesSteel, SteelxWater, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesSteel, SteelxElectric, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, SteelxGrass, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesSteel, SteelxIce, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, SteelxFighting, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, SteelxPoison, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, SteelxGround, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, SteelxFlying, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, SteelxPsychic, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, SteelxBug, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesSteel, SteelxRock, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, SteelxGhost, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, SteelxDragon, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesSteel, SteelxDark, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(SteelTypeDualTypesTest, SteelxSteelAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesSteel, SteelxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesSteel, SteelxFairy, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}