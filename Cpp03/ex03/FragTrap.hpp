#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap{
	public:
		FragTrap(std::string name);
		void attack(const std::string& target);
		void  highFivesGuys();
		~FragTrap();
};
#endif