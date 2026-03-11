#include "ScavTrap.hpp"


int main(){
	ClapTrap  obj("snoozy");
	ScavTrap t("Robot");
	obj.attack("target");
	obj.takeDamage(5);
	obj.beRepaired(5);
	t.attack("ok");
}