#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()			
{
	_name = "Clappy";	
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Default ClapTrap constructor of object " << _name << ", called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;	
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Custom ClapTrap constructor of object " << _name << ", called." << std::endl;
}

ClapTrap::~ClapTrap()																				
{
	std::cout << "Default ClapTrap destructor of object " << _name << ", called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &className) 						
{
	std::cout << "ClapTrap copy constructor, called" << std::endl;
	_hitPoints = className._hitPoints;
	_energyPoints = className._energyPoints;
	_attackDamage = className._attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &className)											
{
	std::cout << "ClapTrap copy assigment operator overload, called." << std::endl;
	this->_hitPoints = className._hitPoints;
	this->_energyPoints = className._energyPoints;
	this->_attackDamage = className._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &targhet)
{
	if (_hitPoints == 0 || _energyPoints == 0)
		std::cout << _name << " has no 'hitPoints' or 'energyPoints' so " << _name << " can't attak " << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << targhet << " causing " << _attackDamage << " 'attackDamage' points! " << std::endl;
		_energyPoints--;
		std::cout << "Now the striker " << _name << " has got; " << _energyPoints << " 'energyPoints' " << std::endl; 
	} 
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_attackDamage = amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0 || _energyPoints == 0)
		std::cout << _name << " has no 'hitPoints' or no 'energyPoints' so " << _name << " can't beRepaired of " << amount << std::endl;
	else
	{
		_hitPoints += amount;
		std::cout << _name + " is charging his 'Hit points' of " << amount << std::endl;
		_energyPoints--;
		std::cout << "Now " << _name << " has got " << _energyPoints << " 'energyPoints' and " << _hitPoints << " 'hitPoints' points left" << std::endl;
	} 
	return ;
}

std::string ClapTrap::getName()
{
	return (_name);
}
