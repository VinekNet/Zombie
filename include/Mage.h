#ifndef MAGE_H
#define MAGE_H

#include <Zombie.h>


class Mage : public Zombie
{    private:
        bool spl=true;
    public:
        Mage();
        virtual ~Mage();
        void Spell(Zombie*cible);
        bool getSpell();
        void setSpell(bool s);
    protected:


};

#endif // MAGE_H
