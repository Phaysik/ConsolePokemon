/*! \file iceTypeMonoTypesTest.cpp
    \brief C++ file for creating tests for the Ice Type x Mono Types.
    \date 08/15/2023
    \version 1.0
    \author Matthew Moore
*/

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/typeEnums.h"
#include "TypeEffectiveness/IceType/iceTypeFixture.h"

TEST_F(IceTypeMonoTypesTest, IcexNormal)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, NormalType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesIce, NormalType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(IceTypeMonoTypesTest, IcexFire)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, FireType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesIce, FireType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(IceTypeMonoTypesTest, IcexWater)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, WaterType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesIce, WaterType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(IceTypeMonoTypesTest, IcexElectric)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, ElectricType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesIce, ElectricType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(IceTypeMonoTypesTest, IcexGrass)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, GrassType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesIce, GrassType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(IceTypeMonoTypesTest, IcexIce)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, IceType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesIce, IceType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(IceTypeMonoTypesTest, IcexFighting)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, FightingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesIce, FightingType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(IceTypeMonoTypesTest, IcexPoison)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, PoisonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesIce, PoisonType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(IceTypeMonoTypesTest, IcexGround)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, GroundType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesIce, GroundType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(IceTypeMonoTypesTest, IcexFlying)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, FlyingType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesIce, FlyingType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(IceTypeMonoTypesTest, IcexPsychic)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, PsychicType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesIce, PsychicType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(IceTypeMonoTypesTest, IcexBug)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, BugType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesIce, BugType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(IceTypeMonoTypesTest, IcexRock)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, RockType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesIce, RockType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(IceTypeMonoTypesTest, IcexGhost)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, GhostType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesIce, GhostType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(IceTypeMonoTypesTest, IcexDragon)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, DragonType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::SUPER)) << errorLog(TypesIce, DragonType, valueToEffectiveness(actualResult), Effectiveness::SUPER);
}

TEST_F(IceTypeMonoTypesTest, IcexDark)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, DarkType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesIce, DarkType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}

TEST_F(IceTypeMonoTypesTest, IcexSteel)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, SteelType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::HALF)) << errorLog(TypesIce, SteelType, valueToEffectiveness(actualResult), Effectiveness::HALF);
}

TEST_F(IceTypeMonoTypesTest, IcexFairy)
{
    float actualResult = typeEffective->getMatchUp(TypesIce, FairyType);

    EXPECT_FLOAT_EQ(actualResult, effectivenessToValue(Effectiveness::NORMAL)) << errorLog(TypesIce, FairyType, valueToEffectiveness(actualResult), Effectiveness::NORMAL);
}