#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default WrongCat constructed" << std::endl;
}
WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat Copy constructed" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat& copy)
{
	if(this != &copy)
	{
		WrongAnimal::operator=(copy);
		std::cout << "WrongCat assigned" << std::endl;
	}
	return (*this);
}
void WrongCat::makeSound() const
{
	std::cout << "Meooow" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed!" << std::endl;
}