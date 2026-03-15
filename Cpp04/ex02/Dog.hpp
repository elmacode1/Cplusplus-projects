#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	private:
		Brain* brain;
	public:
		Dog();
        Dog( const Dog& copy );
        Dog &operator=( const Dog& copy );
		void setIdea(const std::string& idea, int index);
		std::string getIdea(int index) const;
		void makeSound() const;
		~Dog();
};

#endif