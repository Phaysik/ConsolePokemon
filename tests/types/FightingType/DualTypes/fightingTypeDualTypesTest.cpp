/*! \file fightingTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Fighting Type x Dual Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/FightingType/fightingTypeFixture.h"

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFighting, FightingxNormal, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFighting, FightingxFire, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFighting, FightingxWater, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFighting, FightingxElectric, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFighting, FightingxGrass, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFighting, FightingxIce, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFighting, FightingxPoison, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFighting, FightingxGround, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFighting, FightingxFlying, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFighting, FightingxPsychic, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFighting, FightingxBug, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFighting, FightingxRock, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesFighting, FightingxGhost, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFighting, FightingxDragon, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFighting, FightingxDark, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFighting, FightingxSteel, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FightingTypeDualTypesTest, FightingxFightingAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesFighting, FightingxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFighting, FightingxFairy, valueToEffectiveness(actualResult), Effectiveness::HALF);
}