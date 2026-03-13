#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal {
	protected:
		std::string type;
	public:
		Cat();
        Cat( const Cat& copy );
        Cat &operator=( const Cat& copy );
		void makeSound();
		~Cat();
};
#endif