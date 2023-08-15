/*! \file dragonTypeDualTypesTest.cpp
    \brief C++ file for creating tests for the Dragon Type x Dual Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/DragonType/dragonTypeFixture.h"

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxNormal);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxNormal, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndFire)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxFire);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxFire, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndWater)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxWater);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxWater, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxElectric);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxElectric, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxGrass);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxGrass, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndIce)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxIce);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxIce, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxFighting);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxFighting, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxPoison);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxPoison, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndGround)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxGround);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxGround, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxFlying);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxFlying, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxPsychic);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxPsychic, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndBug)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxBug);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxBug, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndRock)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxRock);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxRock, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxGhost);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxGhost, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndDark)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxDark);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesDragon, DragonxDark, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxSteel);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesDragon, DragonxSteel, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(DragonTypeDualTypesTest, DragonxDragonAndFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesDragon, DragonxFairy);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesDragon, DragonxFairy, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}