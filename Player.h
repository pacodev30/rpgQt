#ifndef PLAYER_H
#define PLAYER_H
#include "Weapon.h"
#include <string>

class Player
{
public:
    Player();
    Player(std::string name, std::string wpName, int wpDamage);
    Player(Player const& other);

    void getState() const;
    std::string getName();
    bool getIsAlive();

    void setAttack(Player &target, int boost);
    void setHurt(int damageQuantity);
    void setWp(std::string newWpName, int newDamage);

private:
    std::string _name;
    int _hp;
    Weapon _wp;

};

#endif // PLAYER_H
