#include "Zombie.hpp"

Zombie::Zombie(){
	this->name = "";
}
Zombie::~Zombie(){
	 std::cout << this->name << " is destroyed" << std::endl;
}
void Zombie::setName(std::string name){
	this->name = name;
}
void Zombie::announce() {
    std::cout << this->name << ":Braiiiiinzzzz....." << std::endl;
}