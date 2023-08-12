/*! \file moves.h
    \brief Header file for Pokemon moves.
    \details Contains the function declarations for the Pokemon moves.
    \date 08/11/2023
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <cstdint>
#include <string>

#include "aliases.h"
#include "trainer/trainer.h"
#include "types/typeEnums.h"

class Pokemon;

/*! \headerfile moves.h
    \brief What moves can do
    \details Creates the properties of a Pokemon move and the functions that will affect the battle
    \date 04/12/2022
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
        \param moveType[in] The move's type
        \param movePower[in] The move's power
        \param moveAccuracy[in] The move's accuracy
        \param movePowerPoints[in] The move's power points
        \param moveName[in] The move's name
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    inline MoveAbstract(const Types moveType, const us movePower, const us moveAccuracy, const us movePowerPoints, const std::string &moveName) : typing(moveType), power(movePower), accuracy(moveAccuracy), powerPoints(movePowerPoints), name(moveName) {}

    /* Overloaded Functions */

    /*! \brief Overload operator=
        \details Will allow chaining for MoveAbstract class types
        \param moves[in] The move and all of it's information
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return MoveAbstract A clone of the moves param
    */
    MoveAbstract &operator=(MoveAbstract &moves);

    /* Member Functions */

    /*! \brief For a move effect
        \details If the move has an effect, it will need to apply to the Pokemon in battle
        \pre The Pokemon of the trainer and opponent both have to be initizlied
        \post Some of the pokemon will have some status applied to them
        \param trainer[in, out] The Pokemon team of the the trainer who initialited combat
        \param opponent[in, out] The Pokemon team of the trainer who is against the engager
        \param userIndex[in] The index of trainer param
        \param type[in] The #BattleType of the battle
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void effect(Pokemon **trainer, Pokemon **opponent, const us userIndex, const BattleType type) const;

    /* Getters */

    /*! \brief Get the Pokemon's move type
        \pre Requires the #typing to already by initialized
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return #Types Returns the Pokemon's move type
    */
    Types getType() const;

    /*! \brief Get the Pokemon's move power
        \pre Requires the #power to already by initialized
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return #us Returns the Pokemon's move Power
    */
    us getPower() const;

    /*! \brief Get the Pokemon's move accuracy
        \pre Requires the #accuracy to already by initialized
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return #us Returns the Pokemon's move accuracy
    */
    us getAccuracy() const;

    /*! \brief Get the Pokemon's move name
        \pre Requires the #name to already by initialized
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return string Returns the Pokemon's move name
    */
    std::string getMoveName() const;

    /* Setters */

    /*! \brief Sets the Pokemon's move power
        \post The Pokemon's move #power will be set to movePower
        \param movePower[in] The new power for the move
        \date 04/12/2022
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
        \date 07/32/2023
        \version 1.0
        \author Matthew Moore
    */
    ~Move(){};

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