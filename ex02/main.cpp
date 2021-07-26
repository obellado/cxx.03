#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {

	ScavTrap Prometeus("Prometeus");
	FragTrap Zeus("Zeus");


	Prometeus.attack( "Zeus");
	Prometeus.takeDamage(100);
	Prometeus.beRepaired(50);
	Prometeus.guardGate();

	Zeus.attack( "Prometeus" );
	Zeus.takeDamage(10);
	Zeus.beRepaired(5);
	Zeus.highFivesGuys();

	return 0;
}
