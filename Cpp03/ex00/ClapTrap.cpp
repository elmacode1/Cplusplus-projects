#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) 
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0){}
void ClapTrap::attack(const std::string& target){
	if(hitPoints == 0)
		std::cout << "ClapTrap "<< name << " is dead!" <<std::endl;
	else if(energyPoints == 0)
		std::cout << "ClapTrap "<< name << " has no energy!" <<std::endl;
	else{
    	energyPoints -= 1;
    	std::cout <<"ClapTrap "<<name<<" attacks "<<target<<", causing "<<attackDamage<<" points of damage!"<< std::endl;
	}
}
void ClapTrap::takeDamage(unsigned int amount){
    if (amount >= hitPoints) //to never be negative
    	hitPoints = 0;
	else
    	hitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount){
   if (energyPoints > 0 && hitPoints > 0){
    	hitPoints += amount;
    	energyPoints -= 1;
   }
	else
		std::cout << "Dead X.X" << std::endl;
}

ClapTrap::~ClapTrap(){}