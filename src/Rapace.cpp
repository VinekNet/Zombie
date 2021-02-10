#include "Rapace.h"

Rapace::Rapace()
{
  setPv(getPv()/2);
  setStrenght(getStrenght()/2);
  //ctor
}

Rapace::~Rapace()
{
    cout<<"Zombie Rapace " <<getNom() << " detruit"<<endl;
    //dtor
}
void Rapace::swift(Zombie* cible){
        cible->setPv(cible->getPv() - (getStrenght()/2));
        setPv(getPv()+(getStrenght()/2));
    }
