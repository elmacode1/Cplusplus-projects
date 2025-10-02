#include "cat.hpp"

Cat::Cat(){
	std::cout << "Cat has been created" << std::endl;
	age = 1;
	name = "kitty";
	color = "vibrant";
}
Cat::Cat(int n,std::string str,std::string str2){
	age=n;
	name=str;
	color=str2;
}

void Cat::play(){
	std::cout << " cat is playing" << std::endl;  
}

void Cat::eat(){
	std::cout << " cat is eating" << std::endl;  
}
