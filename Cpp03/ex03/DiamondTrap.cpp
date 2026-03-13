#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : name("default2")
{
	ClapTrap::name = name + "_clap_name";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	std::cout << "[DiamondTrap] " << name << " constructer called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy), name(copy.name)
{
		std::cout << "[DiamondTrap] " << name << " copy constructed" << std::endl;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap& copy)
{
	if (this != &copy)
	{
		ClapTrap::name = copy.ClapTrap::name;
		this->name = copy.name;
		hitPoints = copy.hitPoints;
		energyPoints = copy.energyPoints;
		attackDamage = copy.attackDamage;
		std::cout << "[DiamondTrap] " << name << " assigned" << std::endl;
	}
	return (*this);
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	std::cout << "[DiamondTrap] " << name << " constructed" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}
 DiamondTrap::~DiamondTrap()
 {
	std::cout << "[DiamondTrap] " << name << " destroyed" << std::endl;
 }