#include <iostream>
#include "ClapTrap.hpp"



int	main( void ) {

	ClapTrap Prometeus("Prometeus");
	ClapTrap Zeus("Zeus");

	Prometeus.attack("Zeus");
	Prometeus.takeDamage(100);
	Prometeus.beRepaired(50);
	
	return 0;
}
