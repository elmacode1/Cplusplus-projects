#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
} 
void ScavTrap::attack(const std::string& target){
	if(hitPoints == 0)
		std::cout << "ScavTrap "<< name << " is dead!" <<std::endl;
	else if(energyPoints == 0)
		std::cout << "ScavTrap "<< name << " has no energy!" <<std::endl;
	else{
    	energyPoints -= 1;
    	std::cout <<"ScavTrap "<<name<<" attacks "<<target<<", causing "<<attackDamage<<" points of damage!"<< std::endl;
	}
}
void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}