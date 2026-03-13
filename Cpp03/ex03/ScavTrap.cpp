#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
		hitPoints = 100;
		energyPoints = 50;
		attackDamage = 20;
		std::cout << "[ScavTrap] " << name << " constructed" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
		std::cout << "[ScavTrap] " << name << " copy constructed" << std::endl;
}
ScavTrap& ScavTrap::operator=( const ScavTrap& copy)
{
	if (this != &copy)
	{
		ClapTrap::operator=(copy);
		std::cout << "[ScavTrap] " << name << " assigned" << std::endl;
	}
	return (*this);
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 60;
	attackDamage = 20;
	std::cout << "[ScavTrap] " << name << " constructed" << std::endl;
} 
void ScavTrap::attack(const std::string& target){
	if (hitPoints == 0)
	{
		std::cout << "[ScavTrap] " << name
				<< " cannot attack (dead)" << std::endl;
		return;
	}
	if (energyPoints == 0)
	{
		std::cout << "[ScavTrap] " << name
					<< " has no energy left" << std::endl;
		return;
	}
	energyPoints--;
	std::cout << "[ScavTrap] " << name
				<< " attacks " << target
				<< ", causing " << attackDamage
				<< " points of damage!" << std::endl;
}
void ScavTrap::guardGate(){
	std::cout << "[ScavTrap] " << name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "[ScavTrap] " << name << " destroyed" << std::endl;
}
