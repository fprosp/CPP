#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap:public ClapTrap  // Eredita la componente pubblica di CLapTrap e la include nella classe ScavTrap.
{
    private:
        ;

    public:
        ScavTrap();                                         // Default costructor
        ScavTrap(std::string name);                         // Custom costructor
        ~ScavTrap();                                        // Default destructor
        ScavTrap(const ScavTrap &className);				// Copy constructor
		ScavTrap &operator=(const ScavTrap &className);		// Copy Assignment operator overload 
    
        void    attack(const std::string &targhet);
        void    guardGate();
};

#endif
