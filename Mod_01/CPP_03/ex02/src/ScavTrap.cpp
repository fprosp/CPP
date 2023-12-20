#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()   
{
    _name = "Scavvy";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "Default ScavTrap constructor of object " << _name << ", called." << std::endl; 
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "Custom ScavTrap constructor of object " << _name << ", called." << std::endl; 
}

ScavTrap::~ScavTrap()																		
{
	std::cout << "Default ScavTrap destructor of object " << _name << ", called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &className):ClapTrap()
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
    _hitPoints = className._hitPoints;
    _attackDamage = className._attackDamage;
    _energyPoints = className._energyPoints;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &className)											
{
	std::cout << "ScavTrap copy assigment operator overload called." << std::endl;
	this->_hitPoints = className._hitPoints;
	this->_energyPoints = className._energyPoints;
	this->_attackDamage = className._attackDamage;
	return (*this);
}

void	ScavTrap::guardGate()
{
	if (_hitPoints > 0)
	{
		if (_energyPoints > 0)
		{
			_energyPoints--;
			std::cout << "ScavTrap " + _name + " is in keeper gate mode." << std::endl;
		}
		else
			std::cout << "ScavTrap " + _name + " can't enter in keeper gate mode because it has no more _energyPoints." << std::endl;
	}
	else
		std::cout << "ScavTrap " + _name + " can't enter in keeper gate because it has no more _hitPoints." << std::endl;
    return ;
}