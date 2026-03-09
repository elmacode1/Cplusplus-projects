#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    weapon = NULL;
    this->name = name;
}
HumanB::~HumanB(){}

void    HumanB::setWeapon(Weapon &_weapon)
{
    weapon = &_weapon;
}
void    HumanB::attack()
{
    if (weapon == NULL)
    {
        std::cout << name << ": doesn't have weapon :/" << std::endl;
        return ;
    }

    std::cout << name << ": attacks with their " << weapon->getType() << std::endl;
}
