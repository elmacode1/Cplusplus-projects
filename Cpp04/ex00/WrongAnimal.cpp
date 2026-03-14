#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "no type :(";
	std::cout << "Default WrongAnimal constructed" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& copy) : type(copy.type)
{
	std::cout << "WrongAnimal Copy constructed" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal& copy)
{
	if(this != &copy)
	{
		this->type = copy.type;
		std::cout << "WrongAnimal assigned" << std::endl;
	}
	return (*this);
}
void WrongAnimal::makeSound() const
{
	std::cout << "no sound" << std::endl;
}
std::string WrongAnimal::getType() const
{
	return type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed!" << std::endl;
}
