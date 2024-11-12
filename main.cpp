#include "Player.h"
#include <string>

int main()
{
    Player unknow;
    Player stella("Stella", "Arc", 15);
    Player esteban("Esteban", "Hammer", 20);

    unknow.getState();
    esteban.getState();
    stella.getState();

    unknow.attack(stella);
    esteban.attack(unknow);
    stella.attack(esteban);

    unknow.getState();
    esteban.getState();
    stella.getState();

    return 0;
}

