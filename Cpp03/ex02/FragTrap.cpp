#include "FragTrap.hpp"

FragTrap::FragTrap()
{
		hitPoints = 100;
		energyPoints = 100;
		attackDamage = 30;
		std::cout << "[FragTrap] " << name << " constructed" << std::endl;
}
FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
		std::cout << "[FragTrap] " << name << " copy constructed" << std::endl;
}
FragTrap& FragTrap::operator=( const FragTrap& copy)
{
	if (this != &copy)
	{
		ClapTrap::operator=(copy);
		std::cout << "[FragTrap] " << name << " assigned" << std::endl;
	}
	return (*this);
}
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "[FragTrap] " << name << " constructed" << std::endl;
} 
void FragTrap::attack(const std::string& target){
	if (hitPoints == 0)
	{
		std::cout << "[FragTrap] " << name
				<< " cannot attack (dead)" << std::endl;
		return;
	}
	if (energyPoints == 0)
	{
		std::cout << "[FragTrap] " << name
					<< " has no energy left" << std::endl;
		return;
	}
	energyPoints--;
	std::cout << "[FragTrap] " << name
				<< " attacks " << target
				<< ", causing " << attackDamage
				<< " points of damage!" << std::endl;
}
void FragTrap::highFivesGuys(){
	std::cout << "[FragTrap] " << name << " is requesting a high-five!" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "[FragTrap] " << name << " destroyed" << std::endl;
}