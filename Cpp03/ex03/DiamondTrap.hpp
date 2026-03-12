#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap& copy);
		DiamondTrap &operator=(const DiamondTrap& copy);
		DiamondTrap(std::string name);
		using FragTrap::highFivesGuys();
		using ScavTrap::attack();
		using ScavTrap:: guardGate();
		void whoAmI();
		~DiamondTrap();
};
#endif