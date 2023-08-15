/*! \file rockTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Rock Type x Dual Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/RockType/rockTypeFixture.h"

TEST_F(RockTypeDualTypesTest, RockxRockAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, RockxNormal, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesRock, RockxFire, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, RockxWater, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, RockxElectric, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, RockxGrass, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesRock, RockxIce, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesRock, RockxFighting, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, RockxPoison, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesRock, RockxGround, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesRock, RockxFlying, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, RockxPsychic, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesRock, RockxBug, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, RockxGhost, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, RockxDragon, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, RockxDark, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesRock, RockxSteel, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(RockTypeDualTypesTest, RockxRockAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesRock, RockxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesRock, RockxFairy, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}