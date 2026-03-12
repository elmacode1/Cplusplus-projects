#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : name("default2")
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	std::cout << "[DiamondTrap] " << name << " constructer called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
		hitPoints = copy.hitPoints;
		energyPoints = copy.energyPoints;
		attackDamage = copy.attackDamage;
		this->name = copy.name;
		std::cout << "[DiamondTrap] " << name << " copy constructed" << std::endl;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap& copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		hitPoints = copy.hitPoints;
		energyPoints = copy.energyPoints;
		attackDamage = copy.attackDamage;
		std::cout << "[DiamondTrap] " << name << " assigned" << std::endl;
	}
	return (*this);
}
DiamondTrap::DiamondTrap(std::string name) : name(name), FragTrap(name), ScavTrap(name)
{
	ClapTrap::name = name + "_clap_name";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	std::cout << "[DiamondTrap] " << name << " constructed" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "[DiamondTrap] " << name << std::endl;
	std::cout << "[ClapTrap] " << ClapTrap::name << std::endl;
}
