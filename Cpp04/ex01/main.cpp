#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
Animal* obj[10];
for(int i=0; i<10;i++){
	if(i<5)
		obj[i]=new Dog();
	else
	obj[i]=new Cat();
}
for(int i=0; i<10;i++){
	obj[i]->makeSound();
}
for(int i=0; i<10;i++){
	delete obj[i]; 
}
delete j;//should not create a leak
delete i;
return 0;
}