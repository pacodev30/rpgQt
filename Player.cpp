#include "Player.h"
#include <iostream>

Player::Player()
    : _name("Unknow soldier"), _hp(100), _wp("Knife", 10)
{
}
Player::Player(std::string name, std::string wpName, int wpDamage)
    : _name(name), _hp(100), _wp(wpName, wpDamage)
{
}
Player::Player(Player const& other)
    : _hp(other._hp), _wp(other._wp)
{
}

void Player::getState() const
{
    std::cout << "Name : "          << _name            << std::endl;
    std::cout << "HP : "            << _hp              << std::endl;
    std::cout << "Weapon : "        << _wp.getName()    << std::endl;
    std::cout << "Weapon damage : " << _wp.getDamage()  << std::endl;
    std::cout << "------------------------------------" << std::endl;
}

void Player::attack(Player &target)
{
    target.hurt(_wp.getDamage());
}
void Player::hurt(int damage)
{
    _hp -= damage;
}
void Player::setWp(std::string newWpName, int newDamage)
{
    _wp.setWeapon(newWpName, newDamage);
}
