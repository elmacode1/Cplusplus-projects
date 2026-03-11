#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : name(name), FragTrap(name), ScavTrap(name)
{
	ClapTrap::name = name + "_clap_name";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	std::cout << "[DiamondTrap] " << name << " constructed" << std::endl;
}


