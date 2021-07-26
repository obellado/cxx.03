#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap( void ) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	ClapTrap::setAttackDamage(this->_attackDamage);
	ClapTrap::setEnergyPoints(this->_energyPoints);
	ClapTrap::setHitPoints(this->_hitPoints);
	std::cout << "ScavTrap Bot has been constructed" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)  {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	ClapTrap::setAttackDamage(this->_attackDamage);
	ClapTrap::setEnergyPoints(this->_energyPoints);
	ClapTrap::setHitPoints(this->_hitPoints);
	std::cout << "ScavTrap " << this->_name << " has been constructed" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap " << this->_name << " is dead :( " << std::endl;
}

void ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << ClapTrap::getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate( void ){
	std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode." << std::endl;
}
