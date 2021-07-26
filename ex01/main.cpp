#include <iostream>
#include "ScavTrap.hpp"

int	main( void ) {

	ScavTrap Prometeus("Prometeus");


	Prometeus.attack("Zeus");
	Prometeus.takeDamage(100);
	Prometeus.beRepaired(50);
	Prometeus.guardGate();

	return 0;
}
