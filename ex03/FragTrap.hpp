#pragma once
#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( std::string name );
		~FragTrap( void );

		std::string	getName( void ) const ;
		int	getHitPoints( void ) const ;
		int	getEnergyPoints( void ) const ;
		int	getAttackDamage( void ) const ;

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void highFivesGuys( void );
};

#endif
