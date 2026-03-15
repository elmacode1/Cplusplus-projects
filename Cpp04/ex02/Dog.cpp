#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	brain = new Brain();
	std::cout << "Default Dog constructed" << std::endl;
}

Dog::Dog(const Dog& copy) : AAnimal(copy)
{
	brain = new Brain(*copy.brain); // deep copy via Brain copy ctor
	std::cout << "Dog Copy constructed" << std::endl;
}

Dog &Dog::operator=(const Dog& copy)
{
	if (this != &copy)
	{
		AAnimal::operator=(copy);

		if (brain)
			delete brain;
		brain = new Brain(*copy.brain); // deep copy
		std::cout << "Dog assigned" << std::endl;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

void Dog::setIdea(const std::string& idea, int index)
{
	brain->setIdea(idea, index);
}

std::string Dog::getIdea(int index) const
{
	return brain->getIdea(index);
}

Dog::~Dog()
{
	std::cout << "Dog destroyed!" << std::endl;
	delete brain;
}