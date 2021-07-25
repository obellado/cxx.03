#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void ) {

	ScavTrap Prometeus("Prometeus");
	FragTrap Zeus("Zeus");
	DiamondTrap Demetra("Demetra");


	Prometeus.attack( "Zeus");
	Prometeus.guardGate();

	Zeus.attack( "Prometeus" );
	Zeus.highFivesGuys();

	Demetra.attack("all Gods of Olimp");

	return 0;
}
