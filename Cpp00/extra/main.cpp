#include "cat.hpp"

int main(){
	Cat cat;
	Cat cat2= Cat(3,"jinx","dark");
	cat.play();
	cat.eat();
	std::cout <<   cat.name  + " " + cat.color  + " " + std::to_string(cat.age) << std::endl;
	std::cout <<   cat2.name  + " " + cat2.color  + " " + std::to_string(cat2.age) << std::endl;
}