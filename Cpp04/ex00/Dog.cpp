#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default Dog constructed" << std::endl;
}
Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog Copy constructed" << std::endl;
}
Dog &Dog::operator=(cont Dog& copy)
{
	if(this != &copy)
	{
		Animal::operator=(copy);
		std::cout << "Dog assigned" << std::endl;
	}
	return (*this);
}
void Dog::makeSound()
{
	std::cout << "Woof Woof" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed!" << std::endl;
}