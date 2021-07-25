#include <iostream>
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"


DiamondTrap::DiamondTrap( void ) {
	std::cout << "DiamondTrap Bot has been constructed" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) {
	this->setName(name);
	// this->setHitPoints(100);
	// this->setEnergyPoints(100);
	// this->setAttackDamage(30);
	std::cout << "DiamondTrap " << this->getName() << " has been constructed" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap " << this->getName() << " is dead :( " << std::endl;
}

std::string	DiamondTrap::getName( void ) const {
	return ( this->_name );
}

int	DiamondTrap::getHitPoints( void ) const {
	return ( this->_hitPoints );
}

int	DiamondTrap::getEnergyPoints( void ) const {
	return ( this->_energyPoints );
}

int	DiamondTrap::getAttackDamage( void ) const {
	return ( this->_attackDamage );
}

void DiamondTrap::attack(std::string const & target) {
	std::cout << "DiamondTrap " << this->getName() << " attacks " << target << " , causing " << this->getAttackDamage() << " points of damage!" << std::endl;

}

void DiamondTrap::takeDamage(unsigned int amount) {
	std::cout << "DiamondTrap " << this->getName() << " is damaged for " << amount << " points of damage !" << std::endl;
	this->_energyPoints -= amount;
}

void DiamondTrap::beRepaired(unsigned int amount) {
	std::cout << "DiamondTrap " << this->getName() << " is repaired for " << amount << " points !" << std::endl;
	this->_energyPoints += amount;
}

// void DiamondTrap::highFivesGuys( void ){
// 	std::cout << "DiamondTrap " << this->getName() << " said: \"High Five, Guys!\"" << std::endl;
}
