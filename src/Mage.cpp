#include "Mage.h"

Mage::Mage()
{
    setPv((getPv()/2));
    setStrenght((getStrenght()/2));
    //ctor
}

Mage::~Mage()
{
   cout<<"Zombie Mage " <<getNom() << " detruit"<<endl; //dtor
}

void Mage::Spell(Zombie*cible){
cible->setStrenght(cible->getStrenght()/2);
}
//bool getSpell(){return spl;}
//void setSpell(bool s){spl=s;}
