#include <iostream>
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


DiamondTrap::DiamondTrap( void ) {
	ClapTrap::setHitPoints(FragTrap::_hitPoints);
	ClapTrap::setEnergyPoints(ScavTrap::_energyPoints);
	ClapTrap::setEnergyPoints(FragTrap::_attackDamage);
	std::cout << "DiamondTrap Bot has been constructed" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : _name(name), ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	ClapTrap::setHitPoints(FragTrap::_hitPoints);
	ClapTrap::setEnergyPoints(ScavTrap::_energyPoints);
	ClapTrap::setAttackDamage(FragTrap::_attackDamage);
	std::cout << "DiamondTrap " << this->_name << " has been constructed" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap " << this->_name << " is dead :( " << std::endl;
}

void DiamondTrap::whoAmI( void ) {
	std::cout << "Name of mine: " << _name << "; ClapTrap name of mine: " << ClapTrap::_name << std::endl;
}
