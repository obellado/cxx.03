#pragma once
#ifndef __SCAVTRAP_H__
# define __SCAVTRAP_H__

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		~ScavTrap( void );

		std::string	getName( void ) const ;
		int	getHitPoints( void ) const ;
		int	getEnergyPoints( void ) const ;
		int	getAttackDamage( void ) const ;

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void guardGate( void );
};

#endif
