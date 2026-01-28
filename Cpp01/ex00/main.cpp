#include "Zombie.hpp"

int main(){
    randomChump("stackZombie");
    Zombie* heapZombie = newZombie("heapZm");
    heapZombie->announce();
    delete heapZombie;
	return 0;
}
