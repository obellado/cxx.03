#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"


FragTrap::FragTrap( void ) {
	std::cout << "FragTrap Bot has been constructed" << std::endl;
}

FragTrap::FragTrap( std::string name ) {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap " << this->getName() << " has been constructed" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap " << this->getName() << " is dead :( " << std::endl;
}

std::string	FragTrap::getName( void ) const {
	return ( this->_name );
}

int	FragTrap::getHitPoints( void ) const {
	return ( this->_hitPoints );
}

int	FragTrap::getEnergyPoints( void ) const {
	return ( this->_energyPoints );
}

int	FragTrap::getAttackDamage( void ) const {
	return ( this->_attackDamage );
}

void FragTrap::attack(std::string const & target) {
	std::cout << "FragTrap " << this->getName() << " attacks " << target << " , causing " << this->getAttackDamage() << " points of damage!" << std::endl;

}

void FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FragTrap " << this->getName() << " is damaged for " << amount << " points of damage !" << std::endl;
	this->_energyPoints -= amount;
}

void FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FragTrap " << this->getName() << " is repaired for " << amount << " points !" << std::endl;
	this->_energyPoints += amount;
}

void FragTrap::highFivesGuys( void ){
	std::cout << "FragTrap " << this->getName() << " said: \"High Five, Guys!\"" << std::endl;
}
