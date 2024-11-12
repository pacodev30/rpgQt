#ifndef WEAPON_H
#define WEAPON_H
#include <string>

    class Weapon
{
public:
    Weapon();
    Weapon(std::string name, int damage);

    std::string getName() const;
    int getDamage() const;

    void setWeapon(std::string name, int damage);

private:
    std::string _name;
    int _damage;
};

#endif // WEAPON_H
