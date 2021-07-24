#include <iostream>
#include "ClapTrap.hpp"


ClapTrap::ClapTrap( void ) : _name("Bot"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Bot has been constructed" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << this->getName() << " has been constructed" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap " << this->getName() << " is dead :( " << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & tocopy ) {

}

ClapTrap& ClapTrap::operator= ( const ClapTrap & tocopy ){
	if (this != &tocopy) {

	}
	return (*this);
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
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << "!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->getName() << " is damaged for " << amount << " points of damage !" << std::endl;
	this->_attackDamage += amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->getName() << " is repaired for " << amount << " points !" << std::endl;
	this->_attackDamage -= amount;
}

std::ostream &	operator<< ( std::ostream & o, const ClapTrap &ct ) {
	o << ct.getHitPoints();
	return o;
}
