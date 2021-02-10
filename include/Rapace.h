#ifndef RAPACE_H
#define RAPACE_H

#include <Zombie.h>


class Rapace : public Zombie
{
    public:
        Rapace();
        virtual ~Rapace();
        void charogne(Zombie* cible);
};

#endif // RAPACE_H
