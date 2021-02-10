#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;
class Zombie
{
    private:
	int pv = 100;
	string nom = "Bobo";
	int strenght = 10;

    public:
    //CONSTRUCTEURS
    Zombie();
    Zombie(int p, int s);
    Zombie(string n);

    //DESTRUCTEUR
    ~Zombie();

     //PV
	int getPv() ;
	void setPv(int p);

    //NOM
	string getNom();
	void setNom(string n);

    //STRENGHT
	int getStrenght() ;
	void setStrenght(int a);

	//SHOW INFOS
	void showInfos() ;
	//TAPER
	void taper(Zombie* cible);
};

#endif // ZOMBIE_H
