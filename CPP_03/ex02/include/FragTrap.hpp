#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
	public:
		FragTrap();										// Default csotructor
		FragTrap(std::string name);						// Custom costructor
		~FragTrap();									// Default destructor
		FragTrap(const FragTrap &className);			// Copy costructor
		FragTrap &operator=(const FragTrap &className);	// Copy assigment overload operator

		void 	highFivesGuys(void);
};

#endif