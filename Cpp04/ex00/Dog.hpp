#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal {
	protected:
		std::string type;
	public:
		Dog();
        Dog( const Dog& copy );
        Dog &operator=( const Dog& copy );
		void makeSound();
		~Dog();
};

#endif