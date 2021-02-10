#include "Mage.h"

Mage::Mage()
{
    setPv((getPv()/2));
    //ctor
}

Mage::~Mage()
{
   cout<<"Zombie Mage " <<getNom() << " detruit"<<endl; //dtor
}
