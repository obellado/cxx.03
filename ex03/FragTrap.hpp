#pragma once
#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	protected:
		std::string		_name;
		int				_hitPoints;
		int 			_energyPoints;
		int 			_attackDamage;
	public:
		FragTrap( void );
		FragTrap( std::string name );
		~FragTrap( void );

		void highFivesGuys( void );
};

#endif
