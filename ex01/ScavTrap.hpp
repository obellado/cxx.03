#pragma once
#ifndef __SCAVTRAP_H__
# define __SCAVTRAP_H__

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		~ScavTrap( void );

		void attack(std::string const & target);

		void guardGate( void );
};

#endif
