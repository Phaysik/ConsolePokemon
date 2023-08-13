/*! \file electricTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Electric Type x Mono Types.
    \date 08/12/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/ElectricType/electricTypeFixture.h"

TEST_F(ElectricTypeMonoTypesTest, ElectricxNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesElectric, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxFire)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesElectric, FireType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxWater)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesElectric, WaterType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, ElectricType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, GrassType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxIce)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesElectric, IceType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesElectric, FightingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesElectric, PoisonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxGround)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::IMMUNE)) << errorLog(TypesElectric, GroundType, valueToEffectiveness(actualResult), Effectiveness::IMMUNE);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesElectric, FlyingType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesElectric, PsychicType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxBug)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesElectric, BugType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxRock)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesElectric, RockType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesElectric, GhostType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesElectric, DragonType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxDark)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesElectric, DarkType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesElectric, SteelType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(ElectricTypeMonoTypesTest, ElectricxFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesElectric, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesElectric, FairyType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}