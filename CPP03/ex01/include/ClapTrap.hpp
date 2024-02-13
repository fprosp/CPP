#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class	ClapTrap
{
	protected:
		std::string _name;
		int 		_hitPoints, _energyPoints, _attackDamage;

	public:
		ClapTrap();											// Default constructor 
		ClapTrap(std::string Name);							// Custom costructor
		~ClapTrap();										// Default destructor
		ClapTrap(const ClapTrap &className);				// Copy constructor
		ClapTrap &operator=(const ClapTrap &className);		// Copy Assignment operator overload 

		void 	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string getName();
};

#endif
