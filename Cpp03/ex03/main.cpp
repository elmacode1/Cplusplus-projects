#include "FragTrap.hpp"


int main(){
	ClapTrap  obj("RobotA");
	FragTrap name("RobotB");
	obj.attack("target");
	obj.takeDamage(5);
	obj.beRepaired(5);
	name.attack("ok");
}