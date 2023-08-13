/*! \file electricTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Electric Type x Dual Types.
    \date 08/12/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/ElectricType/electricTypeFixture.h"

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, ElectricxNormal, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, ElectricxFire, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesElectric, ElectricxWater, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesElectric, ElectricxGrass, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, ElectricxIce, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, ElectricxFighting, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, ElectricxPoison, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesElectric, ElectricxGround, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesElectric, ElectricxFlying, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, ElectricxPsychic, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, ElectricxBug, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, ElectricxRock, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, ElectricxGhost, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesElectric, ElectricxDragon, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, ElectricxDark, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, ElectricxSteel, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(ElectricTypeDualTypesTest, ElectricxElectricAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, ElectricxFairy, valueToEffectiveness(actualResult), Effectiveness::HALF);
}