/*! \file moves.h
    \brief Header file for Pokemon moves.
    \details Contains the function declarations for the Pokemon moves.
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <cstdint>
#include <string>

#include "trainer/trainer.h"
#include "types/typeEnums.h"

using us = uint16_t; /*!< Shorthand for unsigned short */

class Pokemon;

/*! \headerfile moves.h
    \brief What moves can do
    \details Creates the properties of a Pokemon move and the functions that will affect the battle
    \date 03/29/2022
    \version 1.0
    \author Matthew Moore
*/
class MoveAbstract
{
public:
    /* Constructors and Destructors */

    /*! \brief Default constructor
        \date 03/29/2022
        \version 1.0
        \author Matthew Moore
    */
    inline MoveAbstract() = default;

    /*! \brief Parameterized constructor
        \details Will initialize all member variables with the parameters
        \param moveType The move's type
        \param movePower The move's power
        \param moveAccuracy The move's accuracy
        \param movePowerPoints The move's power points
        \param moveName The move's name
        \date 10/07/2021
        \version 1.0
        \author Matthew Moore
    */
    inline MoveAbstract(const Types moveType, const us movePower, const us moveAccuracy, const us movePowerPoints, const std::string &moveName) : typing(moveType), power(movePower), accuracy(moveAccuracy), powerPoints(movePowerPoints), name(moveName) {}

    /* Overloaded Functions */

    /*! \brief Overload operator=
        \details Will allow chaining for MoveAbstract class types
        \param moves The move and all of it's information
        \retval MoveAbstract A clone of the moves param
        \date 10/07/2021
        \version 1.0
        \author Matthew Moore
    */
    MoveAbstract &operator=(MoveAbstract &moves);

    /* Member Functions */

    /*! \brief For a move effect
        \details If the move has an effect, it will need to apply to the Pokemon in battle
        \pre The Pokemon of the trainer and opponent both have to be initizlied
        \post Some of the pokemon will have some status applied to them
        \param trainer The Pokemon team of the the trainer who initialited combat
        \param opponent The Pokemon team of the trainer who is against the engager
        \param userIndex The index of trainer param
        \param type The #BattleType of the battle
        \date 10/07/2021
        \version 1.0
        \author Matthew Moore
    */
    void effect(Pokemon **trainer, Pokemon **opponent, const us userIndex, const BattleType type) const;

    /* Getters */

    /*! \brief Get the Pokemon's move type
        \retval #Types Returns the Pokemon's move type
        \pre Requires the #typing to already by initialized
        \date 10/07/2021
        \version 1.0
        \author Matthew Moore
    */
    Types getType() const;

    /*! \brief Get the Pokemon's move power
        \retval #us Returns the Pokemon's move Power
        \pre Requires the #power to already by initialized
        \date 10/07/2021
        \version 1.0
        \author Matthew Moore
    */
    us getPower() const;

    /*! \brief Get the Pokemon's move accuracy
        \retval #us Returns the Pokemon's move accuracy
        \pre Requires the #accuracy to already by initialized
        \date 10/07/2021
        \version 1.0
        \author Matthew Moore
    */
    us getAccuracy() const;

    /*! \brief Get the Pokemon's move name
        \retval string Returns the Pokemon's move name
        \pre Requires the #name to already by initialized
        \date 10/07/2021
        \version 1.0
        \author Matthew Moore
    */
    std::string getMoveName() const;

    /* Setters */

    /*! \brief Sets the Pokemon's move power
        \post The Pokemon's move #power will be set to movePower
        \param movePower The new power for the move
        \date 10/07/2021
        \version 1.0
        \author Matthew Moore
    */
    void setPower(const us movePower);

protected:
    Types typing;     /*!< The move's type */
    us power;         /*!< The move's power */
    us accuracy;      /*!< The move's accuracy */
    us powerPoints;   /*!< The move's power points */
    std::string name; /*!< The move's name */
};

/*! \headerfile moves.h
    \brief Declaration for each Pokemon move
    \details Creates the move based on all of it's parameters
    \date 03/29/2022
    \version 1.0
    \author Matthew Moore
*/
struct Move
{
    /* Constructors and Destructors */

    /*! \brief Empty constructor
        \date 03/29/2022
        \version 1.0
        \author Matthew Moore
    */
    Move(){};

    /*! \brief Default destructor
        \date 03/29/2022
        \version 1.0
        \author Matthew Moore
    */
    ~Move() = default;

    // TODO make this a dictionary?
    MoveAbstract growl = MoveAbstract(Normal, 0, 100, 40, "Growl");
    MoveAbstract tackle = MoveAbstract(Normal, 40, 100, 35, "Tackle");
    MoveAbstract headbutt = MoveAbstract(Normal, 70, 100, 15, "Headbutt");
    MoveAbstract vinewhip = MoveAbstract(Grass, 45, 100, 25, "Vinewhip");
    MoveAbstract ember = MoveAbstract(Fire, 40, 100, 20, "Ember");
    MoveAbstract smokescreen = MoveAbstract(Normal, 0, 100, 20, "Smokescreen");
    MoveAbstract flamethrower = MoveAbstract(Fire, 90, 100, 15, "Flamethrower");
    MoveAbstract flareblitz = MoveAbstract(Fire, 120, 100, 15, "Flare Blitz");
};