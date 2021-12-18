/*! \file stats.h
    \brief Header file for Pokemon stats.
    \details Contains the function declarations for the Pokemon stats.
    \date 12/18/2021
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <memory>

typedef unsigned short us; /*!< Shorthand for unsigned short */

/*! \headerfile stats.h
    \brief Pokemon stats
    \details Creates the properties of a Pokemon stats the functions that will affect those stats
    \date 12/18/2021
    \version 1.0
    \author Matthew Moore
*/
class Stats
{
public:
    /* Constructors and Destructors */

    /*! \brief Empty constructor
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    inline Stats() {}

    /*! \brief Parameterized constructor
        \details Initializes every member variable to build up a Stat object
        \param hpStat The health points of the Pokemon
        \param attackStat The attack of the Pokemon
        \param defenseStat The defense of the Pokemon
        \param spAStat The special attack of the Pokemon
        \param spDStat The special defense of the Pokemon
        \param speedStat The speed of the Pokemon
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    inline Stats(const us hpStat, const us attackStat, const us defenseStat, const us spAStat, const us spDStat, const us speedStat) : hp(hpStat), maxHp(hpStat), attack(attackStat), defense(defenseStat), spA(spAStat), spD(spDStat), speed(speedStat), attackMultiplier(1), defenseMultiplier(1), spAMultiplier(1), spDMultiplier(1), speedMultiplier(1) {}

    /* Overloaded Operators */

    /*! \brief Overload operator=
        \details Will allow chaining for Stats class types
        \param stats The stats and all of it's information
        \retval Stats A clone of the stats param
        \date 12/18/2021
        \version 1.0
        \author Matthew Moore
    */
    Stats &operator=(const std::unique_ptr<Stats> &stats);

    /* Member Functions */

    /*! \brief Reset all multipliers
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    void resetMultipliers();

    /* Getters */

    /*! \brief Get the Pokemon's hp
        \retval #us Returns the Pokemon's hp
        \pre Requires the #hp to already by initialized
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    us getHp() const;

    /*! \brief Get the Pokemon's maxHp
        \retval #us Returns the Pokemon's maxHp
        \pre Requires the #maxHp to already by initialized
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    us getMaxHp() const;

    /*! \brief Get the Pokemon's attack
        \retval #us Returns the Pokemon's attack
        \pre Requires the #attack to already by initialized
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    us getAttack() const;

    /*! \brief Get the Pokemon's defense
        \retval #us Returns the Pokemon's defense
        \pre Requires the #defense to already by initialized
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    us getDefense() const;

    /*! \brief Get the Pokemon's special attack
        \retval #us Returns the Pokemon's special attack
        \pre Requires the #spA to already by initialized
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    us getSpA() const;

    /*! \brief Get the Pokemon's special defense
        \retval #us Returns the Pokemon's special defense
        \pre Requires the #spD to already by initialized
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    us getSpD() const;

    /*! \brief Get the Pokemon's speed
        \retval #us Returns the Pokemon's speed
        \pre Requires the #speed to already by initialized
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    us getSpeed() const;

    /*! \brief Get the Pokemon's attack multiplier
        \retval float Returns the Pokemon's attack multiplier
        \pre Requires the #attackMultiplier to already by initialized
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    float getAttackMultiplier() const;

    /*! \brief Get the Pokemon's defense multiplier
        \retval float Returns the Pokemon's defense multiplier
        \pre Requires the #defenseMultiplier to already by initialized
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    float getDefenseMultiplier() const;

    /*! \brief Get the Pokemon's special attack multiplier
        \retval float Returns the Pokemon's special attack multiplier
        \pre Requires the #spAMultiplier to already by initialized
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    float getSpAMultiplier() const;

    /*! \brief Get the Pokemon's special defense multiplier
        \retval float Returns the Pokemon's special defense multiplier
        \pre Requires the #spDMultiplier to already by initialized
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    float getSpDMultiplier() const;

    /*! \brief Get the Pokemon's speed multiplier
        \retval float Returns the Pokemon's speed multiplier
        \pre Requires the #speedMultiplier to already by initialized
        \date 10/08/2021
        \version 1.0
        \author Matthew Moore
    */
    float getSpeedMultiplier() const;

    /* Setters */

    /*! \brief Sets the Pokemon's hp
        \post The Pokemon's stat #hp will be set to hpStat
        \param hpStat The new hp for the Pokemon
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void setHp(const us hpStat);

    /*! \brief Sets the Pokemon's maxHp
        \post The Pokemon's stat #maxHp will be set to hpStat
        \param hpStat The new maxHp for the Pokemon
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void setMaxHp(const us hpStat);

    /*! \brief Sets the Pokemon's attack
        \post The Pokemon's stat #attack will be set to attackStat
        \param attackStat The new attack for the Pokemon
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void setAttack(const us attackStat);

    /*! \brief Sets the Pokemon's defense
        \post The Pokemon's stat #defense will be set to defenseStat
        \param defenseStat The new defense for the Pokemon
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void setDefense(const us defenseStat);

    /*! \brief Sets the Pokemon's special attack
        \post The Pokemon's stat #spA will be set to spAStat
        \param spAStat The new special attack for the Pokemon
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void setSpA(const us spAStat);

    /*! \brief Sets the Pokemon's special defense
        \post The Pokemon's stat #spD will be set to spDStat
        \param spDStat The new special defense for the Pokemon
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void setSpD(const us spDStat);

    /*! \brief Sets the Pokemon's speed
        \post The Pokemon's stat #speed will be set to speedStat
        \param speedStat The new speed for the Pokemon
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void setSpeed(const us speedStat);

    /*! \brief Sets the Pokemon's attack multiplier
        \post The Pokemon's stat #attackMultiplier will be set to attackMultiplierStat
        \param attackMultiplierStat The new attack multiplier for the Pokemon
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void setAttackMultiplier(const float attackMultiplierStat);

    /*! \brief Sets the Pokemon's defense multiplier
        \post The Pokemon's stat #defenseMultiplier will be set to defenseMultiplierStat
        \param defenseMultiplierStat The new defense multiplier for the Pokemon
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void setDefenseMultiplier(const float defenseMultiplierStat);

    /*! \brief Sets the Pokemon's special attack multiplier
        \post The Pokemon's stat #spAMultiplier will be set to spAMultiplierStat
        \param spAMultiplierStat The new special attack multiplier for the Pokemon
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void setSpAMultiplier(const float spAMultiplierStat);

    /*! \brief Sets the Pokemon's special defense multiplier
        \post The Pokemon's stat #spDMultiplier will be set to spDMultiplierStat
        \param spDMultiplierStat The new special defense multiplier for the Pokemon
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void setSpDMultiplier(const float spDMultiplierStat);

    /*! \brief Sets the Pokemon's speed multiplier
        \post The Pokemon's stat #speedMultiplier will be set to speedMultiplierStat
        \param speedMultiplierStat The new speed multiplier for the Pokemon
        \date 10/13/2021
        \version 1.0
        \author Matthew Moore
    */
    void setSpeedMultiplier(const float speedMultiplierStat);

private:
    us hp;      /*!< Hp of the Pokemon */
    us maxHp;   /*!< Max Hp of the Pokemon */
    us attack;  /*!< Attack of the Pokemon */
    us defense; /*!< Defense of the Pokemon */
    us spA;     /*!< Special attack of the Pokemon */
    us spD;     /*!< Special defense of the Pokemon */
    us speed;   /*!< Speed of the Pokemon */

    float attackMultiplier;  /*!< Attack multiplier of the Pokemon */
    float defenseMultiplier; /*!< Defense multiplier of the Pokemon */
    float spAMultiplier;     /*!< Special attack multiplier of the Pokemon */
    float spDMultiplier;     /*!< Special defense multiplier of the Pokemon */
    float speedMultiplier;   /*!< Speed multiplier of the Pokemon */
};