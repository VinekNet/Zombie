#include "Tank.h"

Tank::Tank()
{
    int armure=50;
    //ctor
}

Tank::~Tank()
{
    cout<<"Zombie Tank " <<getNom() << " detruit"<<endl;
    //dtor
}
int Tank::getArmor(){
return armure;
}
void Tank::setArmor(int a){
armure=a;
}
void Tank::setPv(int p){
    if (armure>0){
        armure-=p;
    }
    else setPv(getPv()-p);
}
void Tank::charge(Zombie* cible){
cible->setPv(cible->getPv() - getArmor());
}
