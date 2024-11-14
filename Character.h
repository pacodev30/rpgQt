#ifndef CHARACTER_H
#define CHARACTER_H
#include "Weapon.h"
#include <string>

class Character
{
public:
    Character();
    Character(std::string name, std::string wpName, int wpDamage);
    Character(Character const& other);

    void getState() const;
    std::string getName();
    bool getIsAlive();

    void setAttack(Character &target, int boost);
    void setHurt(int damageQuantity);
    void setWp(std::string newWpName, int newDamage);

private:
    std::string _name;
    int _hp;
    Weapon _wp;

};

#endif // CHARACTER_H
