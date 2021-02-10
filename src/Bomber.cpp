#include "Bomber.h"

Bomber::Bomber()
{
   setStrenght(getStrenght()*2); //ctor
}

Bomber::~Bomber()
{
   cout<<"Zombie Bomber " <<getNom() << " detruit"<<endl; //dtor
}

void Bomber::explosion(Zombie* cible){
        cible->setPv(cible->getPv() - (getStrenght()*3));
        Zombie::~Zombie;
    }
