#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"


FragTrap::FragTrap( void ) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	ClapTrap::setAttackDamage(this->_attackDamage);
	ClapTrap::setEnergyPoints(this->_energyPoints);
	ClapTrap::setHitPoints(this->_hitPoints);
	std::cout << "FragTrap Bot has been constructed" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	ClapTrap::setAttackDamage(this->_attackDamage);
	ClapTrap::setEnergyPoints(this->_energyPoints);
	ClapTrap::setHitPoints(this->_hitPoints);
	std::cout << "FragTrap " << this->_name << " has been constructed" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap " << this->_name << " is dead :( " << std::endl;
}

void FragTrap::highFivesGuys( void ){
	std::cout << "FragTrap " << this->_name << " said: \"High Five, Guys!\"" << std::endl;
}
