#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
} 
void FragTrap::attack(const std::string& target){
	if(hitPoints == 0)
		std::cout << "FragTrap "<< name << " is dead!" <<std::endl;
	else if(energyPoints == 0)
		std::cout << "FragTrap "<< name << " has no energy!" <<std::endl;
	else{
    	energyPoints -= 1;
    	std::cout <<"FragTrap "<<name<<" attacks "<<target<<", causing "<<attackDamage<<" points of damage!"<< std::endl;
	}
}
void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << name << " is requesting a high-five" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
}