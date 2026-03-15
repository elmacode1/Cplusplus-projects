#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	private:
		Brain* brain;
	public:
		Cat();
        Cat( const Cat& copy );
        Cat &operator=( const Cat& copy );
		void setIdea(const std::string& idea, int index);
		std::string getIdea(int index) const;
		void makeSound() const;
		~Cat();
};
#endif