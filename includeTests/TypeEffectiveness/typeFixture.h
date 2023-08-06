/*! \file typeFixture.h
    \brief Header file for creating a test fixture for TypeEffectiveness.
    \details Contains the function declarations for the TypeEffectiveness fixture.
    \date 08/06/2023
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <string>
#include <unordered_map>

#include "gtest/gtest.h"
#include "types/typeEffectiveness.h"
#include "types/pokemonTypes.h"

/*! \headerfile typeFixture.h
    \brief A test fixture for TypeEffectiveness
    \details Creates a test fixture with reusable functions and variables to be used in all TypeEffectiveness tests
    \date 08/06/2023
    \version 1.0
    \author Matthew Moore
*/
class TypeEffectivenessTest : public ::testing::Test
{
protected:
    /* Overrides */

    /*! \brief Runs on every test fixture test
        \details Overrides the default SetUp() method to initialize #mapTypesToTypeNames and #mapEffectivenessToTypeName
        \post #mapTypesToTypeNames and #mapEffectivenessToTypeName will be initialized.
        \date 08/05/2023
        \version 1.0
        \author Matthew Moore
    */
    void SetUp() override;

    // void TearDown() override {}

    /* Member Functions */

    /*! \brief Will return an error message
        \pre The attackType param must be a valid #Types. The actual and expected params must be a valid #Effectiveness.
        \param attackType[in] The type to get the matchup against
        \param opponentTypes[in] The type(s) of the enemy #Pokemon
        \param actual[in] The actual #Effectiveness value of the attackType against the enemy #Pokemon
        \param expected[in] The expected #Effectiveness value of the attackType against the enemy #Pokemon
        \date 08/06/2023
        \version 1.0
        \author Matthew Moore
        \return std::string Returns an error message if the #TypeEffectiveness test fails
    */
    std::string errorLog(const Types attackType, const PokemonTypes &opponentTypes, const Effectiveness actual, const Effectiveness expected);

    /*! \brief Converts the #Effectiveness value to a float representation
        \pre The effectiveness param must be a valid #Effectiveness
        \param effectiveness[in] The #Effectiveness value to be converted
        \date 08/06/2023
        \version 1.0
        \author Matthew Moore
        \return float The #Effectiveness value as a float
    */
    float effectivenessToValue(const Effectiveness effectiveness);

    /*! \brief Converts the float value to a #Effectiveness representation
        \pre The effectivenessValue param must be a valid float representation of #Effectiveness
        \param effectivenessValue[in] The float representation of an #Effectiveness enum
        \date 08/06/2023
        \version 1.0
        \author Matthew Moore
        \return Effectiveness The #Effectiveness representation of the float value
    */
    Effectiveness valueToEffectiveness(const float effectivenessValue);

    TypeEffective typeEffective; /*!< The class that initializes the type chart */

    /* Single Types */

    const Types TypesNormal = Types::Normal;     /*!< The Normal Type as a #Types object */
    const Types TypesFire = Types::Fire;         /*!< The Fire Type as a #Types object */
    const Types TypesWater = Types::Water;       /*!< The Water Type as a #Types object */
    const Types TypesElectric = Types::Electric; /*!< The Electric Type as a #Types object */
    const Types TypesGrass = Types::Grass;       /*!< The Grass Type as a #Types object */
    const Types TypesIce = Types::Ice;           /*!< The Ice Type as a #Types object */
    const Types TypesFighting = Types::Fighting; /*!< The Fighting Type as a #Types object */
    const Types TypesPoison = Types::Poison;     /*!< The Poison Type as a #Types object */
    const Types TypesGround = Types::Ground;     /*!< The Ground Type as a #Types object */
    const Types TypesFlying = Types::Flying;     /*!< The Flying Type as a #Types object */
    const Types TypesPsychic = Types::Psychic;   /*!< The Psychic Type as a #Types object */
    const Types TypesBug = Types::Bug;           /*!< The Bug Type as a #Types object */
    const Types TypesRock = Types::Rock;         /*!< The Rock Type as a #Types object */
    const Types TypesGhost = Types::Ghost;       /*!< The Ghost Type as a #Types object */
    const Types TypesDragon = Types::Dragon;     /*!< The Dragon Type as a #Types object */
    const Types TypesDark = Types::Dark;         /*!< The Dark Type as a #Types object */
    const Types TypesSteel = Types::Steel;       /*!< The Steel Type as a #Types object */
    const Types TypesFairy = Types::Fairy;       /*!< The Fairy Type as a #Types object */

    /* Single Types */

    const PokemonTypes NormalType = PokemonTypes(this->TypesNormal);     /*!< The Normal Type as a #PokemonTypes object */
    const PokemonTypes FireType = PokemonTypes(this->TypesFire);         /*!< The Fire Type as a #PokemonTypes object */
    const PokemonTypes WaterType = PokemonTypes(this->TypesWater);       /*!< The Water Type as a #PokemonTypes object */
    const PokemonTypes ElectricType = PokemonTypes(this->TypesElectric); /*!< The Electric Type as a #PokemonTypes object */
    const PokemonTypes GrassType = PokemonTypes(this->TypesGrass);       /*!< The Grass Type as a #PokemonTypes object */
    const PokemonTypes IceType = PokemonTypes(this->TypesIce);           /*!< The Ice Type as a #PokemonTypes object */
    const PokemonTypes FightingType = PokemonTypes(this->TypesFighting); /*!< The Fighting Type as a #PokemonTypes object */
    const PokemonTypes PoisonType = PokemonTypes(this->TypesPoison);     /*!< The Poison Type as a #PokemonTypes object */
    const PokemonTypes GroundType = PokemonTypes(this->TypesGround);     /*!< The Ground Type as a #PokemonTypes object */
    const PokemonTypes FlyingType = PokemonTypes(this->TypesFlying);     /*!< The Flying Type as a #PokemonTypes object */
    const PokemonTypes PsychicType = PokemonTypes(this->TypesPsychic);   /*!< The Psychic Type as a #PokemonTypes object */
    const PokemonTypes BugType = PokemonTypes(this->TypesBug);           /*!< The Bug Type as a #PokemonTypes object */
    const PokemonTypes RockType = PokemonTypes(this->TypesRock);         /*!< The Rock Type as a #PokemonTypes object */
    const PokemonTypes GhostType = PokemonTypes(this->TypesGhost);       /*!< The Ghost Type as a #PokemonTypes object */
    const PokemonTypes DragonType = PokemonTypes(this->TypesDragon);     /*!< The Dragon Type as a #PokemonTypes object */
    const PokemonTypes DarkType = PokemonTypes(this->TypesDark);         /*!< The Dark Type as a #PokemonTypes object */
    const PokemonTypes SteelType = PokemonTypes(this->TypesSteel);       /*!< The Steel Type as a #PokemonTypes object */
    const PokemonTypes FairyType = PokemonTypes(this->TypesFairy);       /*!< The Fairy Type as a #PokemonTypes object */

    /* Normal Dual Types */

    const PokemonTypes NormalxFire = PokemonTypes(this->TypesNormal, this->TypesFire);         /*!< The Normal and Fire Type */
    const PokemonTypes NormalxWater = PokemonTypes(this->TypesNormal, this->TypesWater);       /*!< The Normal and Water Type */
    const PokemonTypes NormalxElectric = PokemonTypes(this->TypesNormal, this->TypesElectric); /*!< The Normal and Electric Type */
    const PokemonTypes NormalxGrass = PokemonTypes(this->TypesNormal, this->TypesGrass);       /*!< The Normal and Grass Type */
    const PokemonTypes NormalxIce = PokemonTypes(this->TypesNormal, this->TypesIce);           /*!< The Normal and Ice Type */
    const PokemonTypes NormalxFighting = PokemonTypes(this->TypesNormal, this->TypesFighting); /*!< The Normal and Fighting Type */
    const PokemonTypes NormalxPoison = PokemonTypes(this->TypesNormal, this->TypesPoison);     /*!< The Normal and Poison Type */
    const PokemonTypes NormalxGround = PokemonTypes(this->TypesNormal, this->TypesGround);     /*!< The Normal and Ground Type */
    const PokemonTypes NormalxFlying = PokemonTypes(this->TypesNormal, this->TypesFlying);     /*!< The Normal and Flying Type */
    const PokemonTypes NormalxPsychic = PokemonTypes(this->TypesNormal, this->TypesPsychic);   /*!< The Normal and Psychic Type */
    const PokemonTypes NormalxBug = PokemonTypes(this->TypesNormal, this->TypesBug);           /*!< The Normal and Bug Type */
    const PokemonTypes NormalxRock = PokemonTypes(this->TypesNormal, this->TypesRock);         /*!< The Normal and Rock Type */
    const PokemonTypes NormalxGhost = PokemonTypes(this->TypesNormal, this->TypesGhost);       /*!< The Normal and Ghost Type */
    const PokemonTypes NormalxDragon = PokemonTypes(this->TypesNormal, this->TypesDragon);     /*!< The Normal and Dragon Type */
    const PokemonTypes NormalxDark = PokemonTypes(this->TypesNormal, this->TypesDark);         /*!< The Normal and Dark Type */
    const PokemonTypes NormalxSteel = PokemonTypes(this->TypesNormal, this->TypesSteel);       /*!< The Normal and Steel Type */
    const PokemonTypes NormalxFairy = PokemonTypes(this->TypesNormal, this->TypesFairy);       /*!< The Normal and Fairy Type */

    /* Fire Dual Types */

    const PokemonTypes FirexNormal = this->NormalxFire;                                    /*!< The Fire and Normal Type */
    const PokemonTypes FirexWater = PokemonTypes(this->TypesFire, this->TypesWater);       /*!< The Fire and Water Type */
    const PokemonTypes FirexElectric = PokemonTypes(this->TypesFire, this->TypesElectric); /*!< The Fire and Electric Type */
    const PokemonTypes FirexGrass = PokemonTypes(this->TypesFire, this->TypesGrass);       /*!< The Fire and Grass Type */
    const PokemonTypes FirexIce = PokemonTypes(this->TypesFire, this->TypesIce);           /*!< The Fire and Ice Type */
    const PokemonTypes FirexFighting = PokemonTypes(this->TypesFire, this->TypesFighting); /*!< The Fire and Fighting Type */
    const PokemonTypes FirexPoison = PokemonTypes(this->TypesFire, this->TypesPoison);     /*!< The Fire and Poison Type */
    const PokemonTypes FirexGround = PokemonTypes(this->TypesFire, this->TypesGround);     /*!< The Fire and Ground Type */
    const PokemonTypes FirexFlying = PokemonTypes(this->TypesFire, this->TypesFlying);     /*!< The Fire and Flying Type */
    const PokemonTypes FirexPsychic = PokemonTypes(this->TypesFire, this->TypesPsychic);   /*!< The Fire and Psychic Type */
    const PokemonTypes FirexBug = PokemonTypes(this->TypesFire, this->TypesBug);           /*!< The Fire and Bug Type */
    const PokemonTypes FirexRock = PokemonTypes(this->TypesFire, this->TypesRock);         /*!< The Fire and Rock Type */
    const PokemonTypes FirexGhost = PokemonTypes(this->TypesFire, this->TypesGhost);       /*!< The Fire and Ghost Type */
    const PokemonTypes FirexDragon = PokemonTypes(this->TypesFire, this->TypesDragon);     /*!< The Fire and Dragon Type */
    const PokemonTypes FirexDark = PokemonTypes(this->TypesFire, this->TypesDark);         /*!< The Fire and Dark Type */
    const PokemonTypes FirexSteel = PokemonTypes(this->TypesFire, this->TypesSteel);       /*!< The Fire and Steel Type */
    const PokemonTypes FirexFairy = PokemonTypes(this->TypesFire, this->TypesFairy);       /*!< The Fire and Fairy Type */

    /* Water Dual Types */

    const PokemonTypes WaterxNormal = this->NormalxWater;                                    /*!< The Water and Normal Type */
    const PokemonTypes WaterxFire = this->FirexWater;                                        /*!< The Water and Fire Type */
    const PokemonTypes WaterxElectric = PokemonTypes(this->TypesWater, this->TypesElectric); /*!< The Water and Electric Type */
    const PokemonTypes WaterxGrass = PokemonTypes(this->TypesWater, this->TypesGrass);       /*!< The Water and Grass Type */
    const PokemonTypes WaterxIce = PokemonTypes(this->TypesWater, this->TypesIce);           /*!< The Water and Ice Type */
    const PokemonTypes WaterxFighting = PokemonTypes(this->TypesWater, this->TypesFighting); /*!< The Water and Fighting Type */
    const PokemonTypes WaterxPoison = PokemonTypes(this->TypesWater, this->TypesPoison);     /*!< The Water and Poison Type */
    const PokemonTypes WaterxGround = PokemonTypes(this->TypesWater, this->TypesGround);     /*!< The Water and Ground Type */
    const PokemonTypes WaterxFlying = PokemonTypes(this->TypesWater, this->TypesFlying);     /*!< The Water and Flying Type */
    const PokemonTypes WaterxPsychic = PokemonTypes(this->TypesWater, this->TypesPsychic);   /*!< The Water and Psychic Type */
    const PokemonTypes WaterxBug = PokemonTypes(this->TypesWater, this->TypesBug);           /*!< The Water and Bug Type */
    const PokemonTypes WaterxRock = PokemonTypes(this->TypesWater, this->TypesRock);         /*!< The Water and Rock Type */
    const PokemonTypes WaterxGhost = PokemonTypes(this->TypesWater, this->TypesGhost);       /*!< The Water and Ghost Type */
    const PokemonTypes WaterxDragon = PokemonTypes(this->TypesWater, this->TypesDragon);     /*!< The Water and Dragon Type */
    const PokemonTypes WaterxDark = PokemonTypes(this->TypesWater, this->TypesDark);         /*!< The Water and Dark Type */
    const PokemonTypes WaterxSteel = PokemonTypes(this->TypesWater, this->TypesSteel);       /*!< The Water and Steel Type */
    const PokemonTypes WaterxFairy = PokemonTypes(this->TypesWater, this->TypesFairy);       /*!< The Water and Fairy Type */

    /* Electric Dual Types */

    const PokemonTypes ElectricxNormal = this->NormalxElectric;                                    /*!< The Electric and Normal Type */
    const PokemonTypes ElectricxFire = this->FirexElectric;                                        /*!< The Electric and Fire Type */
    const PokemonTypes ElectricxWater = this->WaterxElectric;                                      /*!< The Electric and Water Type */
    const PokemonTypes ElectricxGrass = PokemonTypes(this->TypesElectric, this->TypesGrass);       /*!< The Electric and Grass Type */
    const PokemonTypes ElectricxIce = PokemonTypes(this->TypesElectric, this->TypesIce);           /*!< The Electric and Ice Type */
    const PokemonTypes ElectricxFighting = PokemonTypes(this->TypesElectric, this->TypesFighting); /*!< The Electric and Fighting Type */
    const PokemonTypes ElectricxPoison = PokemonTypes(this->TypesElectric, this->TypesPoison);     /*!< The Electric and Poison Type */
    const PokemonTypes ElectricxGround = PokemonTypes(this->TypesElectric, this->TypesGround);     /*!< The Electric and Ground Type */
    const PokemonTypes ElectricxFlying = PokemonTypes(this->TypesElectric, this->TypesFlying);     /*!< The Electric and Flying Type */
    const PokemonTypes ElectricxPsychic = PokemonTypes(this->TypesElectric, this->TypesPsychic);   /*!< The Electric and Psychic Type */
    const PokemonTypes ElectricxBug = PokemonTypes(this->TypesElectric, this->TypesBug);           /*!< The Electric and Bug Type */
    const PokemonTypes ElectricxRock = PokemonTypes(this->TypesElectric, this->TypesRock);         /*!< The Electric and Rock Type */
    const PokemonTypes ElectricxGhost = PokemonTypes(this->TypesElectric, this->TypesGhost);       /*!< The Electric and Ghost Type */
    const PokemonTypes ElectricxDragon = PokemonTypes(this->TypesElectric, this->TypesDragon);     /*!< The Electric and Dragon Type */
    const PokemonTypes ElectricxDark = PokemonTypes(this->TypesElectric, this->TypesDark);         /*!< The Electric and Dark Type */
    const PokemonTypes ElectricxSteel = PokemonTypes(this->TypesElectric, this->TypesSteel);       /*!< The Electric and Steel Type */
    const PokemonTypes ElectricxFairy = PokemonTypes(this->TypesElectric, this->TypesFairy);       /*!< The Electric and Fairy Type */

    /* Grass Dual Types */

    const PokemonTypes GrassxNormal = this->NormalxGrass;                                    /*!< The Grass and Normal Type */
    const PokemonTypes GrassxFire = this->FirexGrass;                                        /*!< The Grass and Fire Type */
    const PokemonTypes GrassxWater = this->WaterxGrass;                                      /*!< The Grass and Water Type */
    const PokemonTypes GrassxElectric = this->ElectricxGrass;                                /*!< The Grass and Electric Type */
    const PokemonTypes GrassxIce = PokemonTypes(this->TypesGrass, this->TypesIce);           /*!< The Grass and Ice Type */
    const PokemonTypes GrassxFighting = PokemonTypes(this->TypesGrass, this->TypesFighting); /*!< The Grass and Fighting Type */
    const PokemonTypes GrassxPoison = PokemonTypes(this->TypesGrass, this->TypesPoison);     /*!< The Grass and Poison Type */
    const PokemonTypes GrassxGround = PokemonTypes(this->TypesGrass, this->TypesGround);     /*!< The Grass and Ground Type */
    const PokemonTypes GrassxFlying = PokemonTypes(this->TypesGrass, this->TypesFlying);     /*!< The Grass and Flying Type */
    const PokemonTypes GrassxPsychic = PokemonTypes(this->TypesGrass, this->TypesPsychic);   /*!< The Grass and Psychic Type */
    const PokemonTypes GrassxBug = PokemonTypes(this->TypesGrass, this->TypesBug);           /*!< The Grass and Bug Type */
    const PokemonTypes GrassxRock = PokemonTypes(this->TypesGrass, this->TypesRock);         /*!< The Grass and Rock Type */
    const PokemonTypes GrassxGhost = PokemonTypes(this->TypesGrass, this->TypesGhost);       /*!< The Grass and Ghost Type */
    const PokemonTypes GrassxDragon = PokemonTypes(this->TypesGrass, this->TypesDragon);     /*!< The Grass and Dragon Type */
    const PokemonTypes GrassxDark = PokemonTypes(this->TypesGrass, this->TypesDark);         /*!< The Grass and Dark Type */
    const PokemonTypes GrassxSteel = PokemonTypes(this->TypesGrass, this->TypesSteel);       /*!< The Grass and Steel Type */
    const PokemonTypes GrassxFairy = PokemonTypes(this->TypesGrass, this->TypesFairy);       /*!< The Grass and Fairy Type */

    /* Ice Dual Types */

    const PokemonTypes IcexNormal = this->NormalxIce;                                    /*!< The Ice and Normal Type */
    const PokemonTypes IcexFire = this->FirexIce;                                        /*!< The Ice and Fire Type */
    const PokemonTypes IcexWater = this->WaterxIce;                                      /*!< The Ice and Water Type */
    const PokemonTypes IcexElectric = this->ElectricxIce;                                /*!< The Ice and Electric Type */
    const PokemonTypes IcexGrass = this->GrassxIce;                                      /*!< The Ice and Grass Type */
    const PokemonTypes IcexFighting = PokemonTypes(this->TypesIce, this->TypesFighting); /*!< The Ice and Fighting Type */
    const PokemonTypes IcexPoison = PokemonTypes(this->TypesIce, this->TypesPoison);     /*!< The Ice and Poison Type */
    const PokemonTypes IcexGround = PokemonTypes(this->TypesIce, this->TypesGround);     /*!< The Ice and Ground Type */
    const PokemonTypes IcexFlying = PokemonTypes(this->TypesIce, this->TypesFlying);     /*!< The Ice and Flying Type */
    const PokemonTypes IcexPsychic = PokemonTypes(this->TypesIce, this->TypesPsychic);   /*!< The Ice and Psychic Type */
    const PokemonTypes IcexBug = PokemonTypes(this->TypesIce, this->TypesBug);           /*!< The Ice and Bug Type */
    const PokemonTypes IcexRock = PokemonTypes(this->TypesIce, this->TypesRock);         /*!< The Ice and Rock Type */
    const PokemonTypes IcexGhost = PokemonTypes(this->TypesIce, this->TypesGhost);       /*!< The Ice and Ghost Type */
    const PokemonTypes IcexDragon = PokemonTypes(this->TypesIce, this->TypesDragon);     /*!< The Ice and Dragon Type */
    const PokemonTypes IcexDark = PokemonTypes(this->TypesIce, this->TypesDark);         /*!< The Ice and Dark Type */
    const PokemonTypes IcexSteel = PokemonTypes(this->TypesIce, this->TypesSteel);       /*!< The Ice and Steel Type */
    const PokemonTypes IcexFairy = PokemonTypes(this->TypesIce, this->TypesFairy);       /*!< The Ice and Fairy Type */

    /* Fighting Dual Types */

    const PokemonTypes FightingxNormal = this->NormalxFighting;                                  /*!< The Fighting and Normal Type */
    const PokemonTypes FightingxFire = this->FirexFighting;                                      /*!< The Fighting and Fire Type */
    const PokemonTypes FightingxWater = this->WaterxFighting;                                    /*!< The Fighting and Water Type */
    const PokemonTypes FightingxElectric = this->ElectricxFighting;                              /*!< The Fighting and Electric Type */
    const PokemonTypes FightingxGrass = this->GrassxFighting;                                    /*!< The Fighting and Grass Type */
    const PokemonTypes FightingxIce = this->IcexFighting;                                        /*!< The Fighting and Ice Type */
    const PokemonTypes FightingxPoison = PokemonTypes(this->TypesFighting, this->TypesPoison);   /*!< The Fighting and Poison Type */
    const PokemonTypes FightingxGround = PokemonTypes(this->TypesFighting, this->TypesGround);   /*!< The Fighting and Ground Type */
    const PokemonTypes FightingxFlying = PokemonTypes(this->TypesFighting, this->TypesFlying);   /*!< The Fighting and Flying Type */
    const PokemonTypes FightingxPsychic = PokemonTypes(this->TypesFighting, this->TypesPsychic); /*!< The Fighting and Psychic Type */
    const PokemonTypes FightingxBug = PokemonTypes(this->TypesFighting, this->TypesBug);         /*!< The Fighting and Bug Type */
    const PokemonTypes FightingxRock = PokemonTypes(this->TypesFighting, this->TypesRock);       /*!< The Fighting and Rock Type */
    const PokemonTypes FightingxGhost = PokemonTypes(this->TypesFighting, this->TypesGhost);     /*!< The Fighting and Ghost Type */
    const PokemonTypes FightingxDragon = PokemonTypes(this->TypesFighting, this->TypesDragon);   /*!< The Fighting and Dragon Type */
    const PokemonTypes FightingxDark = PokemonTypes(this->TypesFighting, this->TypesDark);       /*!< The Fighting and Dark Type */
    const PokemonTypes FightingxSteel = PokemonTypes(this->TypesFighting, this->TypesSteel);     /*!< The Fighting and Steel Type */
    const PokemonTypes FightingxFairy = PokemonTypes(this->TypesFighting, this->TypesFairy);     /*!< The Fighting and Fairy Type */

    /* Poison Dual Types */

    const PokemonTypes PoisonxNormal = this->NormalxPoison;                                  /*!< The Poison and Normal Type */
    const PokemonTypes PoisonxFire = this->FirexPoison;                                      /*!< The Poison and Fire Type */
    const PokemonTypes PoisonxWater = this->WaterxPoison;                                    /*!< The Poison and Water Type */
    const PokemonTypes PoisonxElectric = this->ElectricxPoison;                              /*!< The Poison and Electric Type */
    const PokemonTypes PoisonxGrass = this->GrassxPoison;                                    /*!< The Poison and Grass Type */
    const PokemonTypes PoisonxIce = this->IcexPoison;                                        /*!< The Poison and Ice Type */
    const PokemonTypes PoisonxFighting = this->FightingxPoison;                              /*!< The Poison and Fighting Type */
    const PokemonTypes PoisonxGround = PokemonTypes(this->TypesPoison, this->TypesGround);   /*!< The Poison and Ground Type */
    const PokemonTypes PoisonxFlying = PokemonTypes(this->TypesPoison, this->TypesFlying);   /*!< The Poison and Flying Type */
    const PokemonTypes PoisonxPsychic = PokemonTypes(this->TypesPoison, this->TypesPsychic); /*!< The Poison and Psychic Type */
    const PokemonTypes PoisonxBug = PokemonTypes(this->TypesPoison, this->TypesBug);         /*!< The Poison and Bug Type */
    const PokemonTypes PoisonxRock = PokemonTypes(this->TypesPoison, this->TypesRock);       /*!< The Poison and Rock Type */
    const PokemonTypes PoisonxGhost = PokemonTypes(this->TypesPoison, this->TypesGhost);     /*!< The Poison and Ghost Type */
    const PokemonTypes PoisonxDragon = PokemonTypes(this->TypesPoison, this->TypesDragon);   /*!< The Poison and Dragon Type */
    const PokemonTypes PoisonxDark = PokemonTypes(this->TypesPoison, this->TypesDark);       /*!< The Poison and Dark Type */
    const PokemonTypes PoisonxSteel = PokemonTypes(this->TypesPoison, this->TypesSteel);     /*!< The Poison and Steel Type */
    const PokemonTypes PoisonxFairy = PokemonTypes(this->TypesPoison, this->TypesFairy);     /*!< The Poison and Fairy Type */

    /* Ground Dual Types */

    const PokemonTypes GroundxNormal = this->NormalxGround;                                  /*!< The Ground and Normal Type */
    const PokemonTypes GroundxFire = this->FirexGround;                                      /*!< The Ground and Fire Type */
    const PokemonTypes GroundxWater = this->WaterxGround;                                    /*!< The Ground and Water Type */
    const PokemonTypes GroundxElectric = this->ElectricxGround;                              /*!< The Ground and Electric Type */
    const PokemonTypes GroundxGrass = this->GrassxGround;                                    /*!< The Ground and Grass Type */
    const PokemonTypes GroundxIce = this->IcexGround;                                        /*!< The Ground and Ice Type */
    const PokemonTypes GroundxFighting = this->FightingxGround;                              /*!< The Ground and Fighting Type */
    const PokemonTypes GroundxPoison = this->PoisonxGround;                                  /*!< The Ground and Poison Type */
    const PokemonTypes GroundxFlying = PokemonTypes(this->TypesGround, this->TypesFlying);   /*!< The Ground and Flying Type */
    const PokemonTypes GroundxPsychic = PokemonTypes(this->TypesGround, this->TypesPsychic); /*!< The Ground and Psychic Type */
    const PokemonTypes GroundxBug = PokemonTypes(this->TypesGround, this->TypesBug);         /*!< The Ground and Bug Type */
    const PokemonTypes GroundxRock = PokemonTypes(this->TypesGround, this->TypesRock);       /*!< The Ground and Rock Type */
    const PokemonTypes GroundxGhost = PokemonTypes(this->TypesGround, this->TypesGhost);     /*!< The Ground and Ghost Type */
    const PokemonTypes GroundxDragon = PokemonTypes(this->TypesGround, this->TypesDragon);   /*!< The Ground and Dragon Type */
    const PokemonTypes GroundxDark = PokemonTypes(this->TypesGround, this->TypesDark);       /*!< The Ground and Dark Type */
    const PokemonTypes GroundxSteel = PokemonTypes(this->TypesGround, this->TypesSteel);     /*!< The Ground and Steel Type */
    const PokemonTypes GroundxFairy = PokemonTypes(this->TypesGround, this->TypesFairy);     /*!< The Ground and Fairy Type */

    /* Flying Dual Types */

    const PokemonTypes FlyingxNormal = this->NormalxFlying;                                  /*!< The Flying and Normal Type */
    const PokemonTypes FlyingxFire = this->FirexFlying;                                      /*!< The Flying and Fire Type */
    const PokemonTypes FlyingxWater = this->WaterxFlying;                                    /*!< The Flying and Water Type */
    const PokemonTypes FlyingxElectric = this->ElectricxFlying;                              /*!< The Flying and Electric Type */
    const PokemonTypes FlyingxGrass = this->GrassxFlying;                                    /*!< The Flying and Grass Type */
    const PokemonTypes FlyingxIce = this->IcexFlying;                                        /*!< The Flying and Ice Type */
    const PokemonTypes FlyingxFighting = this->FightingxFlying;                              /*!< The Flying and Fighting Type */
    const PokemonTypes FlyingxPoison = this->PoisonxFlying;                                  /*!< The Flying and Poison Type */
    const PokemonTypes FlyingxGround = this->GroundxFlying;                                  /*!< The Flying and Ground Type */
    const PokemonTypes FlyingxPsychic = PokemonTypes(this->TypesFlying, this->TypesPsychic); /*!< The Flying and Psychic Type */
    const PokemonTypes FlyingxBug = PokemonTypes(this->TypesFlying, this->TypesBug);         /*!< The Flying and Bug Type */
    const PokemonTypes FlyingxRock = PokemonTypes(this->TypesFlying, this->TypesRock);       /*!< The Flying and Rock Type */
    const PokemonTypes FlyingxGhost = PokemonTypes(this->TypesFlying, this->TypesGhost);     /*!< The Flying and Ghost Type */
    const PokemonTypes FlyingxDragon = PokemonTypes(this->TypesFlying, this->TypesDragon);   /*!< The Flying and Dragon Type */
    const PokemonTypes FlyingxDark = PokemonTypes(this->TypesFlying, this->TypesDark);       /*!< The Flying and Dark Type */
    const PokemonTypes FlyingxSteel = PokemonTypes(this->TypesFlying, this->TypesSteel);     /*!< The Flying and Steel Type */
    const PokemonTypes FlyingxFairy = PokemonTypes(this->TypesFlying, this->TypesFairy);     /*!< The Flying and Fairy Type */

    /* Psychic Dual Types */

    const PokemonTypes PsychicxNormal = this->NormalxPsychic;                                /*!< The Psychic and Normal Type */
    const PokemonTypes PsychicxFire = this->FirexPsychic;                                    /*!< The Psychic and Fire Type */
    const PokemonTypes PsychicxWater = this->WaterxPsychic;                                  /*!< The Psychic and Water Type */
    const PokemonTypes PsychicxElectric = this->ElectricxPsychic;                            /*!< The Psychic and Electric Type */
    const PokemonTypes PsychicxGrass = this->GrassxPsychic;                                  /*!< The Psychic and Grass Type */
    const PokemonTypes PsychicxIce = this->IcexPsychic;                                      /*!< The Psychic and Ice Type */
    const PokemonTypes PsychicxFighting = this->FightingxPsychic;                            /*!< The Psychic and Fighting Type */
    const PokemonTypes PsychicxPoison = this->PoisonxPsychic;                                /*!< The Psychic and Poison Type */
    const PokemonTypes PsychicxGround = this->GroundxPsychic;                                /*!< The Psychic and Ground Type */
    const PokemonTypes PsychicxFlying = this->FlyingxPsychic;                                /*!< The Psychic and Flying Type */
    const PokemonTypes PsychicxBug = PokemonTypes(this->TypesPsychic, this->TypesBug);       /*!< The Psychic and Bug Type */
    const PokemonTypes PsychicxRock = PokemonTypes(this->TypesPsychic, this->TypesRock);     /*!< The Psychic and Rock Type */
    const PokemonTypes PsychicxGhost = PokemonTypes(this->TypesPsychic, this->TypesGhost);   /*!< The Psychic and Ghost Type */
    const PokemonTypes PsychicxDragon = PokemonTypes(this->TypesPsychic, this->TypesDragon); /*!< The Psychic and Dragon Type */
    const PokemonTypes PsychicxDark = PokemonTypes(this->TypesPsychic, this->TypesDark);     /*!< The Psychic and Dark Type */
    const PokemonTypes PsychicxSteel = PokemonTypes(this->TypesPsychic, this->TypesSteel);   /*!< The Psychic and Steel Type */
    const PokemonTypes PsychicxFairy = PokemonTypes(this->TypesPsychic, this->TypesFairy);   /*!< The Psychic and Fairy Type */

    /* Bug Dual Types */

    const PokemonTypes BugxNormal = this->NormalxBug;                                /*!< The Bug and Normal Type */
    const PokemonTypes BugxFire = this->FirexBug;                                    /*!< The Bug and Fire Type */
    const PokemonTypes BugxWater = this->WaterxBug;                                  /*!< The Bug and Water Type */
    const PokemonTypes BugxElectric = this->ElectricxBug;                            /*!< The Bug and Electric Type */
    const PokemonTypes BugxGrass = this->GrassxBug;                                  /*!< The Bug and Grass Type */
    const PokemonTypes BugxIce = this->IcexBug;                                      /*!< The Bug and Ice Type */
    const PokemonTypes BugxFighting = this->FightingxBug;                            /*!< The Bug and Fighting Type */
    const PokemonTypes BugxPoison = this->PoisonxBug;                                /*!< The Bug and Poison Type */
    const PokemonTypes BugxGround = this->GroundxBug;                                /*!< The Bug and Ground Type */
    const PokemonTypes BugxPsychic = this->PsychicxBug;                              /*!< The Bug and Flying Type */
    const PokemonTypes BugxFlying = this->FlyingxBug;                                /*!< The Bug and Psychic Type */
    const PokemonTypes BugxRock = PokemonTypes(this->TypesBug, this->TypesRock);     /*!< The Bug and Rock Type */
    const PokemonTypes BugxGhost = PokemonTypes(this->TypesBug, this->TypesGhost);   /*!< The Bug and Ghost Type */
    const PokemonTypes BugxDragon = PokemonTypes(this->TypesBug, this->TypesDragon); /*!< The Bug and Dragon Type */
    const PokemonTypes BugxDark = PokemonTypes(this->TypesBug, this->TypesDark);     /*!< The Bug and Dark Type */
    const PokemonTypes BugxSteel = PokemonTypes(this->TypesBug, this->TypesSteel);   /*!< The Bug and Steel Type */
    const PokemonTypes BugxFairy = PokemonTypes(this->TypesBug, this->TypesFairy);   /*!< The Bug and Fairy Type */

    /* Rock Dual Types */

    const PokemonTypes RockxNormal = this->NormalxRock;                                /*!< The Rock and Normal Type */
    const PokemonTypes RockxFire = this->FirexRock;                                    /*!< The Rock and Fire Type */
    const PokemonTypes RockxWater = this->WaterxRock;                                  /*!< The Rock and Water Type */
    const PokemonTypes RockxElectric = this->ElectricxRock;                            /*!< The Rock and Electric Type */
    const PokemonTypes RockxGrass = this->GrassxRock;                                  /*!< The Rock and Grass Type */
    const PokemonTypes RockxIce = this->IcexRock;                                      /*!< The Rock and Ice Type */
    const PokemonTypes RockxFighting = this->FightingxRock;                            /*!< The Rock and Fighting Type */
    const PokemonTypes RockxPoison = this->PoisonxRock;                                /*!< The Rock and Poison Type */
    const PokemonTypes RockxGround = this->GroundxRock;                                /*!< The Rock and Ground Type */
    const PokemonTypes RockxPsychic = this->PsychicxRock;                              /*!< The Rock and Flying Type */
    const PokemonTypes RockxFlying = this->FlyingxRock;                                /*!< The Rock and Psychic Type */
    const PokemonTypes RockxBug = this->BugxRock;                                      /*!< The Rock and Bug Type */
    const PokemonTypes RockxGhost = PokemonTypes(this->TypesRock, this->TypesGhost);   /*!< The Rock and Ghost Type */
    const PokemonTypes RockxDragon = PokemonTypes(this->TypesRock, this->TypesDragon); /*!< The Rock and Dragon Type */
    const PokemonTypes RockxDark = PokemonTypes(this->TypesRock, this->TypesDark);     /*!< The Rock and Dark Type */
    const PokemonTypes RockxSteel = PokemonTypes(this->TypesRock, this->TypesSteel);   /*!< The Rock and Steel Type */
    const PokemonTypes RockxFairy = PokemonTypes(this->TypesRock, this->TypesFairy);   /*!< The Rock and Fairy Type */

    /* Ghost Dual Types */

    const PokemonTypes GhostxNormal = this->NormalxGhost;                                /*!< The Ghost and Normal Type */
    const PokemonTypes GhostxFire = this->FirexGhost;                                    /*!< The Ghost and Fire Type */
    const PokemonTypes GhostxWater = this->WaterxGhost;                                  /*!< The Ghost and Water Type */
    const PokemonTypes GhostxElectric = this->ElectricxGhost;                            /*!< The Ghost and Electric Type */
    const PokemonTypes GhostxGrass = this->GrassxGhost;                                  /*!< The Ghost and Grass Type */
    const PokemonTypes GhostxIce = this->IcexGhost;                                      /*!< The Ghost and Ice Type */
    const PokemonTypes GhostxFighting = this->FightingxGhost;                            /*!< The Ghost and Fighting Type */
    const PokemonTypes GhostxPoison = this->PoisonxGhost;                                /*!< The Ghost and Poison Type */
    const PokemonTypes GhostxGround = this->GroundxGhost;                                /*!< The Ghost and Ground Type */
    const PokemonTypes GhostxPsychic = this->PsychicxGhost;                              /*!< The Ghost and Flying Type */
    const PokemonTypes GhostxFlying = this->FlyingxGhost;                                /*!< The Ghost and Psychic Type */
    const PokemonTypes GhostxBug = this->BugxGhost;                                      /*!< The Ghost and Bug Type */
    const PokemonTypes GhostxRock = this->RockxGhost;                                    /*!< The Ghost and Rock Type */
    const PokemonTypes GhostxDragon = PokemonTypes(this->TypesGhost, this->TypesDragon); /*!< The Ghost and Dragon Type */
    const PokemonTypes GhostxDark = PokemonTypes(this->TypesGhost, this->TypesDark);     /*!< The Ghost and Dark Type */
    const PokemonTypes GhostxSteel = PokemonTypes(this->TypesGhost, this->TypesSteel);   /*!< The Ghost and Steel Type */
    const PokemonTypes GhostxFairy = PokemonTypes(this->TypesGhost, this->TypesFairy);   /*!< The Ghost and Fairy Type */

    /* Dragon Dual Types */

    const PokemonTypes DragonxNormal = this->NormalxDragon;                              /*!< The Dragon and Normal Type */
    const PokemonTypes DragonxFire = this->FirexDragon;                                  /*!< The Dragon and Fire Type */
    const PokemonTypes DragonxWater = this->WaterxDragon;                                /*!< The Dragon and Water Type */
    const PokemonTypes DragonxElectric = this->ElectricxDragon;                          /*!< The Dragon and Electric Type */
    const PokemonTypes DragonxGrass = this->GrassxDragon;                                /*!< The Dragon and Grass Type */
    const PokemonTypes DragonxIce = this->IcexDragon;                                    /*!< The Dragon and Ice Type */
    const PokemonTypes DragonxFighting = this->FightingxDragon;                          /*!< The Dragon and Fighting Type */
    const PokemonTypes DragonxPoison = this->PoisonxDragon;                              /*!< The Dragon and Poison Type */
    const PokemonTypes DragonxGround = this->GroundxDragon;                              /*!< The Dragon and Ground Type */
    const PokemonTypes DragonxPsychic = this->PsychicxDragon;                            /*!< The Dragon and Flying Type */
    const PokemonTypes DragonxFlying = this->FlyingxDragon;                              /*!< The Dragon and Psychic Type */
    const PokemonTypes DragonxBug = this->BugxDragon;                                    /*!< The Dragon and Bug Type */
    const PokemonTypes DragonxRock = this->RockxDragon;                                  /*!< The Dragon and Rock Type */
    const PokemonTypes DragonxGhost = this->GhostxDragon;                                /*!< The Dragon and Ghost Type */
    const PokemonTypes DragonxDark = PokemonTypes(this->TypesDragon, this->TypesDark);   /*!< The Dragon and Dark Type */
    const PokemonTypes DragonxSteel = PokemonTypes(this->TypesDragon, this->TypesSteel); /*!< The Dragon and Steel Type */
    const PokemonTypes DragonxFairy = PokemonTypes(this->TypesDragon, this->TypesFairy); /*!< The Dragon and Fairy Type */

    /* Dark Dual Types */

    const PokemonTypes DarkxNormal = this->NormalxDark;                              /*!< The Dark and Normal Type */
    const PokemonTypes DarkxFire = this->FirexDark;                                  /*!< The Dark and Fire Type */
    const PokemonTypes DarkxWater = this->WaterxDark;                                /*!< The Dark and Water Type */
    const PokemonTypes DarkxElectric = this->ElectricxDark;                          /*!< The Dark and Electric Type */
    const PokemonTypes DarkxGrass = this->GrassxDark;                                /*!< The Dark and Grass Type */
    const PokemonTypes DarkxIce = this->IcexDark;                                    /*!< The Dark and Ice Type */
    const PokemonTypes DarkxFighting = this->FightingxDark;                          /*!< The Dark and Fighting Type */
    const PokemonTypes DarkxPoison = this->PoisonxDark;                              /*!< The Dark and Poison Type */
    const PokemonTypes DarkxGround = this->GroundxDark;                              /*!< The Dark and Ground Type */
    const PokemonTypes DarkxPsychic = this->PsychicxDark;                            /*!< The Dark and Flying Type */
    const PokemonTypes DarkxFlying = this->FlyingxDark;                              /*!< The Dark and Psychic Type */
    const PokemonTypes DarkxBug = this->BugxDark;                                    /*!< The Dark and Bug Type */
    const PokemonTypes DarkxRock = this->RockxDark;                                  /*!< The Dark and Rock Type */
    const PokemonTypes DarkxGhost = this->GhostxDark;                                /*!< The Dark and Ghost Type */
    const PokemonTypes DarkxDragon = this->DragonxDark;                              /*!< The Dark and Dragon Type */
    const PokemonTypes DarkxSteel = PokemonTypes(this->TypesDark, this->TypesSteel); /*!< The Dark and Steel Type */
    const PokemonTypes DarkxFairy = PokemonTypes(this->TypesDark, this->TypesFairy); /*!< The Dark and Fairy Type */

    /* Steel Dual Types */

    const PokemonTypes SteelxNormal = this->NormalxSteel;                              /*!< The Steel and Normal Type */
    const PokemonTypes SteelxFire = this->FirexSteel;                                  /*!< The Steel and Fire Type */
    const PokemonTypes SteelxWater = this->WaterxSteel;                                /*!< The Steel and Water Type */
    const PokemonTypes SteelxElectric = this->ElectricxSteel;                          /*!< The Steel and Electric Type */
    const PokemonTypes SteelxGrass = this->GrassxSteel;                                /*!< The Steel and Grass Type */
    const PokemonTypes SteelxIce = this->IcexSteel;                                    /*!< The Steel and Ice Type */
    const PokemonTypes SteelxFighting = this->FightingxSteel;                          /*!< The Steel and Fighting Type */
    const PokemonTypes SteelxPoison = this->PoisonxSteel;                              /*!< The Steel and Poison Type */
    const PokemonTypes SteelxGround = this->GroundxSteel;                              /*!< The Steel and Ground Type */
    const PokemonTypes SteelxPsychic = this->PsychicxSteel;                            /*!< The Steel and Flying Type */
    const PokemonTypes SteelxFlying = this->FlyingxSteel;                              /*!< The Steel and Psychic Type */
    const PokemonTypes SteelxBug = this->BugxSteel;                                    /*!< The Steel and Bug Type */
    const PokemonTypes SteelxRock = this->RockxSteel;                                  /*!< The Steel and Rock Type */
    const PokemonTypes SteelxGhost = this->GhostxSteel;                                /*!< The Steel and Ghost Type */
    const PokemonTypes SteelxDragon = this->DragonxSteel;                              /*!< The Steel and Dragon Type */
    const PokemonTypes SteelxDark = this->DarkxSteel;                                  /*!< The Steel and Dark Type */
    const PokemonTypes SteelxFairy = PokemonTypes(this->TypesSteel, this->TypesFairy); /*!< The Steel and Fairy Type */

    /* Fairy Dual Types */

    const PokemonTypes FairyxNormal = this->NormalxFairy;     /*!< The Fairy and Normal Type */
    const PokemonTypes FairyxFire = this->FirexFairy;         /*!< The Fairy and Fire Type */
    const PokemonTypes FairyxWater = this->WaterxFairy;       /*!< The Fairy and Water Type */
    const PokemonTypes FairyxElectric = this->ElectricxFairy; /*!< The Fairy and Electric Type */
    const PokemonTypes FairyxGrass = this->GrassxFairy;       /*!< The Fairy and Grass Type */
    const PokemonTypes FairyxIce = this->IcexFairy;           /*!< The Fairy and Ice Type */
    const PokemonTypes FairyxFighting = this->FightingxFairy; /*!< The Fairy and Fighting Type */
    const PokemonTypes FairyxPoison = this->PoisonxFairy;     /*!< The Fairy and Poison Type */
    const PokemonTypes FairyxGround = this->GroundxFairy;     /*!< The Fairy and Ground Type */
    const PokemonTypes FairyxPsychic = this->PsychicxFairy;   /*!< The Fairy and Flying Type */
    const PokemonTypes FairyxFlying = this->FlyingxFairy;     /*!< The Fairy and Psychic Type */
    const PokemonTypes FairyxBug = this->BugxFairy;           /*!< The Fairy and Bug Type */
    const PokemonTypes FairyxRock = this->RockxFairy;         /*!< The Fairy and Rock Type */
    const PokemonTypes FairyxGhost = this->GhostxFairy;       /*!< The Fairy and Ghost Type */
    const PokemonTypes FairyxDragon = this->DragonxFairy;     /*!< The Fairy and Dragon Type */
    const PokemonTypes FairyxDark = this->DarkxFairy;         /*!< The Fairy and Dark Type */
    const PokemonTypes FairyxSteel = this->SteelxFairy;       /*!< The Fairy and Steel Type */

private:
    std::unordered_map<int, std::string> mapTypesToTypeNames;               /*!< It will map the #Types enum values to their actual string representations */
    std::unordered_map<int, std::string> mapEffectivenessToTypeName;        /*!< It will map the #Effectiveness enum values to their actual string representations */
    std::unordered_map<int, Effectiveness> mapFloatToEffectivenessTypeName; /*!< It will map a float representation of the #Effectiveness enum to its enum representation */
    std::unordered_map<int, float> mapEffectivenessToValue;                 /*!< It will map the #Effectiveness enum values to their float representations */
};