#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	brain = new Brain();
	std::cout << "Default Dog constructed" << std::endl;
}
Dog::Dog(const Dog& copy) : Animal(copy)
{
	this->brain = new Brain();
	for(int i=0; i<100; i++)
	{
		this->brain->ideas[i] = copy.brain->ideas[i];
	}
	std::cout << "Dog Copy constructed" << std::endl;
}
Dog &Dog::operator=(const Dog& copy)
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
		std::cout << "Dog assigned" << std::endl;
	}
	return (*this);
}
void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}
Dog::~Dog()
{
	std::cout << "Dog destroyed!" << std::endl;
	delete brain;
}