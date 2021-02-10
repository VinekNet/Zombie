#ifndef BOMBER_H
#define BOMBER_H

#include <Zombie.h>


class Bomber : public Zombie
{
    private:

    public:
        Bomber();
        virtual ~Bomber();

        void explosion(Zombie* cible);

};

#endif // BOMBER_H
