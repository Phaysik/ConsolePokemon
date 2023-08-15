/*! \file flyingTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Flying Type x Dual Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/FlyingType/flyingTypeFixture.h"

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, FlyingxNormal, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, FlyingxFire, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, FlyingxWater, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFlying, FlyingxElectric, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFlying, FlyingxGrass, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, FlyingxIce, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFlying, FlyingxFighting, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, FlyingxPoison, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, FlyingxGround, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, FlyingxPsychic, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesFlying, FlyingxBug, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFlying, FlyingxRock, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, FlyingxGhost, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, FlyingxDragon, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, FlyingxDark, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesFlying, FlyingxSteel, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(FlyingTypeDualTypesTest, FlyingxFlyingAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesFlying, FlyingxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesFlying, FlyingxFairy, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}