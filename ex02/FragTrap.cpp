#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"


FragTrap::FragTrap( void ) {
	std::cout << "FragTrap Bot has been constructed" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap " << this->getName() << " has been constructed" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap " << this->getName() << " is dead :( " << std::endl;
}

void FragTrap::highFivesGuys( void ){
	std::cout << "FragTrap " << this->getName() << " said: \"High Five, Guys!\"" << std::endl;
}
