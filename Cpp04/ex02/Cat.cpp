#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	brain = new Brain();
	std::cout << "Default Cat constructed" << std::endl;
}

Cat::Cat(const Cat& copy) : AAnimal(copy)
{
	brain = new Brain(*copy.brain); // deep copy
	std::cout << "Cat Copy constructed" << std::endl;
}

Cat &Cat::operator=(const Cat& copy)
{
	if (this != &copy)
	{
		AAnimal::operator=(copy);

		if (brain)
			delete brain;
		brain = new Brain(*copy.brain); // deep copy
		std::cout << "Cat assigned" << std::endl;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meooow" << std::endl;
}

void Cat::setIdea(const std::string& idea, int index)
{
	brain->setIdea(idea, index);
}

std::string Cat::getIdea(int index) const
{
	return brain->getIdea(index);
}

Cat::~Cat()
{
	std::cout << "Cat destroyed!" << std::endl;
	delete brain;
}