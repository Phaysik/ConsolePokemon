/*! \file grassTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Grass Type x Dual Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/GrassType/grassTypeFixture.h"

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, GrassxNormal, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesGrass, GrassxFire, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGrass, GrassxWater, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, GrassxElectric, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, GrassxIce, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, GrassxFighting, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesGrass, GrassxPoison, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGrass, GrassxGround, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesGrass, GrassxFlying, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, GrassxPsychic, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesGrass, GrassxBug, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesGrass, GrassxRock, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, GrassxGhost, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxDragon);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesGrass, GrassxDragon, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, GrassxDark, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::QUART)) << errorLog(TypesGrass, GrassxSteel, valueToEffectiveness(actualResult), Effectiveness::QUART);
}

TEST_F(GrassTypeDualTypesTest, GrassxGrassAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesGrass, GrassxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesGrass, GrassxFairy, valueToEffectiveness(actualResult), Effectiveness::HALF);
}