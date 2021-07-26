#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap( void ) {
	std::cout << "ScavTrap Bot has been constructed" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap " << this->getName() << " has been constructed" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap " << this->getName() << " is dead :( " << std::endl;
}

void ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << " , causing " << this->getAttackDamage() << " points of damage!" << std::endl;

}

void ScavTrap::guardGate( void ){
	std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode." << std::endl;
}
