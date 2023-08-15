/*! \file ghostTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Ghost Type x Dual Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/GhostType/ghostTypeFixture.h"

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesGhost, GhostxNormal, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostxFire, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostxWater, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostxElectric, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostxGrass, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostxIce, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostxFighting, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostxPoison, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostxGround, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostxFlying, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUAD)) << errorLog(TypesGhost, GhostxPsychic, valueToEffectiveness(actualResult), Effectiveness::QUAD);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostxBug, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostxRock, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostxDragon, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGhost, GhostxDark, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostxSteel, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GhostTypeDualTypesTest, GhostxGhostAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesGhost, GhostxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGhost, GhostxFairy, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}