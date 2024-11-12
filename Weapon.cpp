#include "Weapon.h"

Weapon::Weapon()
    : _name("Epée"), _damage(10)
{
};
Weapon::Weapon(std::string name, int damage)
    : _name(name), _damage(damage)
{
};

std::string Weapon::getName() const
{
    return _name;
};
int Weapon::getDamage() const
{
    return _damage;
}

void Weapon::setWeapon(std::string name, int damage)
{
    _name = name;
    _damage = damage;
};

