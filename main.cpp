#include "Player.h"
#include <string>

int main()
{
    Player monster;
    Player stella("Stella", "Arc", 15);
    Player esteban("Esteban", "Hammer", 30);

    monster.getState();
    esteban.getState();
    stella.getState();

    monster.setWp("Saber", 30);

    monster.setAttack(stella, 1);
    stella.setAttack(monster, 3);
    esteban.setAttack(monster, 2);
    monster.setAttack(esteban, 2);

    monster.getState();
    esteban.getState();
    stella.getState();

    return 0;
}

