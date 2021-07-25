#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {

	ScavTrap Prometeus("Prometeus");
	FragTrap Zeus("Zeus");


	Prometeus.attack( "Zeus");
	Prometeus.guardGate();

	Zeus.attack( "Prometeus" );
	Zeus.highFivesGuys();

	return 0;
}
