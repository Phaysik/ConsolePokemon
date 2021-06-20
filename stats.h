/*
 * @file stats.h
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/20/2021
 * @brief The definition for the Stats class
*/

#ifndef STATS_H
#define STATS_H

#ifndef us
#define us unsigned short
#endif

class Stats
{
public:
    Stats() {}
    Stats(us hp, us attack, us defense, us spA, us spD, us speed) : hp(hp), attack(attack), defense(defense), spA(spA), spD(spD), speed(speed), attackMultiplier(1), defenseMultiplier(1), spAMultiplier(1), spDMultiplier(1), speedMultiplier(1) {}

    void operator=(Stats *stats);

    us getHp() const;
    us getAttack() const;
    us getDefense() const;
    us getSpA() const;
    us getSpD() const;
    us getSpeed() const;

    void setHp(us hp);
    void setAttack(us attack);
    void setDefense(us defense);
    void setSpA(us spA);
    void setSpD(us spD);
    void setSpeed(us speed);

    void setAttackMultiplier(us attackMultiplier);
    void setDefenseMultiplier(us defenseMultiplier);
    void setSpAMultiplier(us spAMultiplier);
    void setSpDMultiplier(us spDMultiplier);
    void setSpeedMultiplier(us speedMultiplier);

private:
    us hp;
    us attack;
    us defense;
    us spA;
    us spD;
    us speed;

    float attackMultiplier;
    float defenseMultiplier;
    float spAMultiplier;
    float spDMultiplier;
    float speedMultiplier;
};

#endif