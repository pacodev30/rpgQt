#include "Character.h"
#include <iostream>

Character::Character()
    : _name("Monster"), _hp(100), _wp("Knife", 10)
{}
Character::Character(std::string name, std::string wpName, int wpDamage)
    : _name(name), _hp(100), _wp(wpName, wpDamage)
{}
Character::Character(Character const& other)
    : _name(other._name), _hp(other._hp), _wp(other._wp)
{}

void Character::getState() const
{
    std::cout       << "-----" << std::endl;
    std::cout       << "Name : " << _name << std::endl;
    if(_hp > 0)
        std::cout   << "HP : " << _hp << std::endl;
    else
        std::cout   << "HP : Dead :(" << std::endl;
    std::cout       << "Weapon : " << _wp.getName() << std::endl;
    std::cout       << "Weapon damage : " << _wp.getDamage() << std::endl;
    std::cout       << "------------------" << std::endl;
}

std::string Character::getName()
{
    return _name;
}
bool Character::getIsAlive()
{
    return _hp > 0;
}


void Character::setAttack(Character &target, int boost)
{
    if(getIsAlive())
    {
        if(boost > 1)
        {
            std::cout << _name << " attack " << target.getName();
            for (int i(0); i < boost; i++)
            {
                target.setHurt(_wp.getDamage());
                std::cout << " (-" << _wp.getDamage() << ")";
            }
            std::cout << std::endl;
        } else
        {
            target.setHurt(_wp.getDamage());
            std::cout << _name << " attack " << target.getName() << " (-" << _wp.getDamage() << ")" << std::endl;
        }
    } else
        std::cout << _name << " can't attack because he's dead !!!" << std::endl;
}
void Character::setHurt(int damage)
{
    if(damage > _hp)
        _hp = 0;
    else
        _hp -= damage;
}
void Character::setWp(std::string newWpName, int newDamage)
{
    if(getIsAlive())
        _wp.setWeapon(newWpName, newDamage);
}
