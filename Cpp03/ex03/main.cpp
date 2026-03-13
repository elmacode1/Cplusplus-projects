#include "FragTrap.hpp"


#include "DiamondTrap.hpp"

int main()
{
// 	std::cout << "\n--- Copy test ---\n";
// DiamondTrap a("Ruby");
// DiamondTrap b(a);
// DiamondTrap c("Test");
// c = a;

// b.whoAmI();
// c.whoAmI();
	// std::cout << "\n--- Creating DiamondTrap ---\n";
	// DiamondTrap d("Ruby");

	// std::cout << "\n--- Testing attack (should use ScavTrap attack) ---\n";
	// d.attack("enemy");

	// std::cout << "\n--- Testing whoAmI() ---\n";
	// d.whoAmI();

	// std::cout << "\n--- Testing damage and repair ---\n";
	// d.takeDamage(20);
	// d.beRepaired(10);

	// std::cout << "\n--- Testing multiple attacks (energy check) ---\n";
	// for (int i = 0; i < 5; i++)
	// 	d.attack("training dummy");

	// std::cout << "\n--- End of program (destructors will run) ---\n";
	// return 0;

	DiamondTrap a("malak");
	a.attack("taha");
	std::cout << a.test() <<std::endl;
	DiamondTrap b(a);
	std::cout << b.test() <<std::endl;
}