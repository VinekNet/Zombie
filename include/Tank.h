#ifndef TANK_H
#define TANK_H

#include <Zombie.h>


class Tank : public Zombie
{
    private:
       int armure=50;
    public:
        Tank();
        virtual ~Tank();
    int getArmor();
    void setArmor(int a);
    void setPv(int p);
    void charge(Zombie* cible);


};

#endif // TANK_H
