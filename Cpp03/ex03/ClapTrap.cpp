#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
		std::cout << "[ClapTrap] " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
		std::cout << "[ClapTrap] " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
	: name(copy.name), hitPoints(copy.hitPoints), energyPoints(copy.energyPoints), attackDamage(copy.attackDamage)
{
	std::cout << "[ClapTrap] " << name << " copy constructed" << std::endl;
}

ClapTrap &ClapTrap::operator=( const ClapTrap& copy)
{
	if (this != &copy)
	{
		std::cout << "[ClapTrap] " << name << " assigned" << std::endl;
		this->name = copy.name;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints == 0)
	{
		std::cout << "[ClapTrap] " << name
				<< " cannot attack (dead)" << std::endl;
		return;
	}
	if (energyPoints == 0)
	{
		std::cout << "[ClapTrap] " << name
					<< " has no energy left" << std::endl;
		return;
	}
	energyPoints--;
	std::cout << "[ClapTrap] " << name
				<< " attacks " << target
				<< ", causing " << attackDamage
				<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (amount >= hitPoints) //to never be negative
    	hitPoints = 0;
	else
    	hitPoints -= amount;
	std::cout << "[ClapTrap] "<< name
				<<" takes " << amount
				<< " damage (HP: " << hitPoints
				<< ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (hitPoints == 0)
	{
		std::cout << "[ClapTrap] " << name
				<< " cannot repair (dead)" << std::endl;
		return;
	}
   if (energyPoints == 0)
   { 
		std::cout << "[ClapTrap] " << name
				<<" has no energy to repair" << std::endl; 
		return;
	} 
	hitPoints += amount;
	energyPoints--;
	std::cout << "[ClapTrap] " << name
				<< " repairs " << amount << " HP (HP: "
				<< hitPoints << ")" << std::endl;
}

ClapTrap::~ClapTrap(){
		std::cout << "[ClapTrap] " << name << " destroyed" << std::endl;
}