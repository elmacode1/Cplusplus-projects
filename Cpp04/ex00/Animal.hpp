#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& copy);
		Animal &operator=(cont Animal& copy);
		~Animal();
		void makeSound();
};
#endif