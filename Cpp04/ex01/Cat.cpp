#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	brain = new Brain();
	std::cout << "Default Cat constructed" << std::endl;
}
Cat::Cat(const Cat& copy) : Animal(copy)
{
	this->brain = new Brain();
	for(int i=0; i<100; i++)
	{
		this->brain->ideas[i] = copy.brain->ideas[i];
	}
	std::cout << "Cat Copy constructed" << std::endl;
}
Cat &Cat::operator=(const Cat& copy)
{
	if(this != &copy)
	{
		Animal::operator=(copy);
		if(this->brain != NULL)
			delete this->brain;
		this->brain = new Brain();
		for(int i=0; i<100; i++)
		{
			this->brain->ideas[i] = copy.brain->ideas[i];
		}
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