#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap{
	public:
		ScavTrap(std::string name);
		void attack(const std::string& target);
		~ScavTrap();
		void guardGate();
};
#endif