#pragma once
#ifndef __CLAPTRAP_H__
# define __CLAPTRAP_H__

class ClapTrap {
	protected:
		std::string				_name;
		int						_hitPoints;
		int 					_energyPoints;
		int 					_attackDamage;
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		~ClapTrap( void );

		std::string	getName( void ) const ;
		int	getHitPoints( void ) const ;
		int	getEnergyPoints( void ) const ;
		int	getAttackDamage( void ) const ;

		void	setName( std::string name ) ;
		void	setHitPoints( int i ) ;
		void	setEnergyPoints( int i ) ;
		void	setAttackDamage( int i ) ;

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);


};

#endif
