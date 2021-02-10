#include "Zombie.h"
#include "Bomber.h"
#include "Rapace.h"
#include "Tank.h"
#include "Mage.h"
int main() {
Zombie z1;
Bomber b1;
b1.showInfos();
b1.explosion(&z1);
z1.showInfos();
    return 0;
}
