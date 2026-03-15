#include "Animal.hpp"

Animal::Animal()
{
	this->type = "no type :(";
	std::cout << "Default Animal constructed" << std::endl;
}
Animal::Animal(const Animal& copy) : type(copy.type)
{
	std::cout << "Animal Copy constructed" << std::endl;
}
Animal &Animal::operator=(const Animal& copy)
{
	if(this != &copy)
	{
		this->type = copy.type;
		std::cout << "Animal assigned" << std::endl;
	}
	return (*this);
}
void Animal::makeSound() const
{
	std::cout << "no sound" << std::endl;
}
const std::string& Animal::getType() const
{
	return type;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed!" << std::endl;
}
