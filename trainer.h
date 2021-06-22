/*
 * @file trainer.h
 * @author Matthew Moore
 * @date 06/20/2021
 * @revision 06/20/2021
 * @brief The definition for the Trainer class
*/

#ifndef TRAINER_H
#define TRAINER_H

#ifndef us
#define us unsigned short
#endif

// Forward declarations
class Pokemon;

class Trainer
{
public:
    Trainer();
    void setPokemonAtIndex(Pokemon *pokemon, us index);
    Pokemon *getPokemonAtIndex(us index);
    ~Trainer();

private:
    Pokemon **pokemon;
};

#endif