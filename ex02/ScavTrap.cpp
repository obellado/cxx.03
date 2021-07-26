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

std::string	ScavTrap::getName( void ) const {
	return ( this->_name );
}

int	ScavTrap::getHitPoints( void ) const {
	return ( this->_hitPoints );
}

int	ScavTrap::getEnergyPoints( void ) const {
	return ( this->_energyPoints );
}

int	ScavTrap::getAttackDamage( void ) const {
	return ( this->_attackDamage );
}

void ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;

}

void ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ScavTrap " << this->getName() << " is damaged for " << amount << " points of damage !" << std::endl;
	this->_energyPoints -= amount;
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "ScavTrap " << this->getName() << " is repaired for " << amount << " points !" << std::endl;
	this->_energyPoints += amount;
}

void ScavTrap::guardGate( void ){
	std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode." << std::endl;
}
