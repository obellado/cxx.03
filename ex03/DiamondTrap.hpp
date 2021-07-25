#pragma once
#ifndef __DIAMONDTRAP_H__
# define __DIAMONDTRAP_H__

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		~DiamondTrap( void );

		std::string	getName( void ) const ;
		int	getHitPoints( void ) const ;
		int	getEnergyPoints( void ) const ;
		int	getAttackDamage( void ) const ;

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		// void highFivesGuys( void );
};

#endif
