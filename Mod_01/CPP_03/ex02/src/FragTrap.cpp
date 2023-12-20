#include "../include/FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()   
{
    _name = "Fraggy";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "Default FragTrap constructor of object " << _name << ", called." << std::endl; 
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "Custom FragTrap constructor of object " << _name << ", called." << std::endl; 
}

FragTrap::~FragTrap()																		
{
	std::cout << "Default FragTrap destructor of object " << _name << ", called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &className):ClapTrap()
{
	std::cout << "FragTrap copy constructor called" << std::endl;
    _hitPoints = className._hitPoints;
    _attackDamage = className._attackDamage;
    _energyPoints = className._energyPoints;
}

FragTrap &FragTrap::operator=(const FragTrap &className)
{
	std::cout << "FragTrap copy assigment operator overload called." << std::endl;
	this->_hitPoints = className._hitPoints;
	this->_energyPoints = className._energyPoints;
	this->_attackDamage = className._attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	if (_hitPoints > 0)
	{
		if (_energyPoints > 0)
		{
			_energyPoints--;
			std::cout << "FragTrap " + _name + " wants to high five with you!" << std::endl;
		}
		else
			std::cout << "FragTrap " + _name + " can't high five because it has no more _energy_points." << std::endl;
	}
	else
		std::cout << "FragTrap " + _name + " can't high five because it has no more _hitPoints." << std::endl;
}
