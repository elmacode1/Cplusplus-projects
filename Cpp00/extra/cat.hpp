#include<string>
#include <iostream>
class Cat{
	public:
	 	int age;
		std::string name;
		std::string color;
	public:
		Cat();
		Cat(int age,std::string name,std::string color);
		void play();
		void eat();
};