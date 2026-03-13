#include "ScavTrap.hpp"


int main(){
	// ClapTrap  obj("snoozy");
	ScavTrap t("malak");
	ScavTrap a;
	// obj.attack("target");
	// obj.takeDamage(5);
	// obj.beRepaired(5);
	t.attack("ok");
	t.attack("test");

	a=t;
	std::cout << a.test() << a.get() << std::endl;
}