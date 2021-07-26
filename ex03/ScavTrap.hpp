#pragma once
#ifndef __SCAVTRAP_H__
# define __SCAVTRAP_H__

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	protected:
		std::string		_name;
		int				_hitPoints;
		int 			_energyPoints;
		int 			_attackDamage;
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		~ScavTrap( void );

		void attack(std::string const & target);

		void guardGate( void );
};

#endif
