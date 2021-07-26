#pragma once
#ifndef __DIAMONDTRAP_H__
# define __DIAMONDTRAP_H__

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string		_name;
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		~DiamondTrap( void );

		void whoAmI( void );
};

#endif
