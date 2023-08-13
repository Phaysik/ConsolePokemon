/*! \file waterTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Water Type x Dual Types.
    \date 08/12/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/WaterType/waterTypeFixture.h"

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, WaterxNormal, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, WaterxFire, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, WaterxElectric, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesWater, WaterxGrass, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, WaterxIce, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, WaterxFighting, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, WaterxPoison, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, WaterxGround, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, WaterxFlying, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, WaterxPsychic, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, WaterxBug, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesWater, WaterxRock, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, WaterxGhost, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesWater, WaterxDragon, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, WaterxDark, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, WaterxSteel, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(WaterTypeDualTypesTest, WaterxWaterAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesWater, WaterxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesWater, WaterxFairy, valueToEffectiveness(actualResult), Effectiveness::HALF);
}