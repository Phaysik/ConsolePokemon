/*! \file poisonTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Poison Type x Dual Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/PoisonType/poisonTypeFixture.h"

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, PoisonxNormal, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, PoisonxFire, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, PoisonxWater, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, PoisonxElectric, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPoison, PoisonxGrass, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, PoisonxIce, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, PoisonxFighting, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesPoison, PoisonxGround, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, PoisonxFlying, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, PoisonxPsychic, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, PoisonxBug, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesPoison, PoisonxRock, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesPoison, PoisonxGhost, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, PoisonxDragon, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesPoison, PoisonxDark, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesPoison, PoisonxSteel, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}

TEST_F(PoisonTypeDualTypesTest, PoisonxPoisonAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesPoison, PoisonxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesPoison, PoisonxFairy, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}