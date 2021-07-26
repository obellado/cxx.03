#include <iostream>
#include "ClapTrap.hpp"


ClapTrap::ClapTrap( void ) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap has been constructed" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << this->getName() << " has been constructed" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap " << this->getName() << " is dead :( " << std::endl;
}

std::string	ClapTrap::getName( void ) const {
	return ( this->_name );
}

int	ClapTrap::getHitPoints( void ) const {
	return ( this->_hitPoints );
}

int	ClapTrap::getEnergyPoints( void ) const {
	return ( this->_energyPoints );
}

int	ClapTrap::getAttackDamage( void ) const {
	return ( this->_attackDamage );
}

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->getName() << " is damaged for " << amount << " points of damage !" << std::endl;
	this->_energyPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->getName() << " is repaired for " << amount << " points !" << std::endl;
	this->_energyPoints += amount;
}

void	ClapTrap::setName( std::string name ) {
	_name = name;
}

void	ClapTrap::setHitPoints( int i ) {
	_hitPoints = i;
}

void	ClapTrap::setEnergyPoints( int i ) {
	_energyPoints = i;
}

void	ClapTrap::setAttackDamage( int i ) {
	_attackDamage = i;
}

