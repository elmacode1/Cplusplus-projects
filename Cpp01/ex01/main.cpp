#include "Zombie.hpp"

int main(){
	Zombie* mylist = zombieHorde(5,"Zombie");
	for(int i = 0; i<5;i++){
		mylist[i].announce();
	}
	delete[] mylist;
}