#include "Zombie.h"

//CONSTRUCTOR
Zombie::Zombie(){
    pv = 100;
	nom = "Bobo";
	strenght = 10;
}

Zombie::Zombie(int p,int s){
//////////////////////////////////////////PV
    if (p > 100 ) {
		cerr << "Hors normes (PV)" << endl;
		pv = 0;
	}
	else if (p <=0) {
		cerr << getNom() <<" dead" << endl;
		pv = 0;
	}
	else {
		pv = p;
	}
//////////////////////////////////////////STRENGHT
    if (s < 0) {
		strenght = 0;
	}
	else if (s > 10 ) {
		cerr << "Hors normes (Force)" << endl;
		strenght = 0;}
    else{
    strenght=s;
    }
}

Zombie::Zombie(string n){
    nom = n;
}
//DESTRUCTOR
Zombie::~Zombie(){
    cout<<"Zombie " <<getNom() << " detruit"<<endl;
}


int Zombie::getPv()
{
	return pv;
}

void Zombie::setPv(int p) {
	if (p <=0) {
		cerr << getNom() <<" dead" << endl;
		pv = 0;
	}
	else {
		pv = p;
	}
}

string Zombie::getNom()
{
	return nom;
}

void Zombie::setNom(string n)
{
	nom = n;
}

int Zombie::getStrenght()
{
	return strenght;
}

void Zombie::setStrenght(int s)
{
	if (s < 0) {
		strenght = 0;
	}
	else {
		strenght = s;
	}
}

void Zombie::showInfos()
{
	cout << "Nom : " << getNom() << endl;
	cout << "PV : " << getPv() << endl;
	cout << "Force : " << getStrenght() << endl;
}

void Zombie::taper(Zombie* cible){
        cible->setPv(cible->getPv() - getStrenght());
    }
