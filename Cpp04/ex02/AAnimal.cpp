#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "no type :(";
	std::cout << "Default AAnimal constructed" << std::endl;
}
AAnimal::AAnimal(const AAnimal& copy) : type(copy.type)
{
	std::cout << "AAnimal Copy constructed" << std::endl;
}
AAnimal &AAnimal::operator=(const AAnimal& copy)
{
	if(this != &copy)
	{
		this->type = copy.type;
		std::cout << "AAnimal assigned" << std::endl;
	}
	return (*this);
}
const std::string& AAnimal::getType() const
{
	return type;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destroyed!" << std::endl;
}
