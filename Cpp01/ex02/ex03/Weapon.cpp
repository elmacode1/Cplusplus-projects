#include "Weapon.hpp"

Weapon::Weapon(std::string str){
    type = str;
}
Weapon::~Weapon(){}

const std::string&  Weapon::getType()
{
    return type;
}
void Weapon::setType(std::string arg)
{
    type = arg;
}
