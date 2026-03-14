#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	brain = new Brain();
	std::cout << "Default Cat constructed" << std::endl;
}
Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat Copy constructed" << std::endl;
}
Cat &Cat::operator=(const Cat& copy)
{
	if(this != &copy)
	{
		Animal::operator=(copy);
		std::cout << "Cat assigned" << std::endl;
	}
	return (*this);
}
void Cat::makeSound() const
{
	std::cout << "Meooow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed!" << std::endl;
	delete brain;
}