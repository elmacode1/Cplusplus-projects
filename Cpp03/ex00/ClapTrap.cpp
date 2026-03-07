#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}
void ClapTrap::attack(const std::string& target){
    energyPoints -= 1;
    std::cout <<"ClapTrap "<<name<<" attacks "<<target<<", causing "<<attackdamage<<" points of damage!"<< std::endl;
}
void ClapTrap::takeDamage(unsigned int amount){
    // reduce hitPoints
}
void ClapTrap::beRepaired(unsigned int amount){
    hitPoints += amount;
    this->energyPoints -= 1;
}
ClapTrap::~ClapTrap(){}