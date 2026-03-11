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
		DiamondTrap(std::string name);
		using ScavTrap::attack;
		void whoAmI();
		~DiamondTrap();
};
#endif