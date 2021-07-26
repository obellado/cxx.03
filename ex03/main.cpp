#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void ) {

	ScavTrap Prometeus("Prometeus");
	std::cout << std::endl;

	Prometeus.attack( "Zeus");
	Prometeus.takeDamage(100);
	Prometeus.beRepaired(50);
	Prometeus.guardGate();

	std::cout << std::endl;
	FragTrap Zeus("Zeus");
	std::cout << std::endl;

	Zeus.attack( "Prometeus" );
	Zeus.takeDamage(10);
	Zeus.beRepaired(5);
	Zeus.highFivesGuys();
	std::cout << std::endl;

	DiamondTrap Demetra("Demetra");
	std::cout << std::endl;
	Demetra.attack("all Gods of Olimp");
	Demetra.highFivesGuys();
	Demetra.guardGate();
	Demetra.whoAmI();
	std::cout << std::endl;

	return 0;
}
