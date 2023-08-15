/*! \file groundTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Ground Type x Dual Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/GroundType/groundTypeFixture.h"

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, GroundxNormal, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGround, GroundxFire, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, GroundxWater, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGround, GroundxElectric, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGround, GroundxGrass, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, GroundxIce, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, GroundxFighting, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGround, GroundxPoison, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesGround, GroundxFlying, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, GroundxPsychic, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGround, GroundxBug, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGround, GroundxRock, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, GroundxGhost, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, GroundxDragon, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, GroundxDark, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesGround, GroundxSteel, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(GroundTypeDualTypesTest, GroundxGroundAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesGround, GroundxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGround, GroundxFairy, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}