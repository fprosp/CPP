/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:59:56 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/19 19:53:58 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Clappy"),_hitPoints(10),_energyPoints(10),_attackDamage(0)	// Default costructor
{
	std::cout << "Default constructor of " << _name << " called." << std::endl; 
}

ClapTrap::ClapTrap(std::string name):_name(name),_hitPoints(10),_energyPoints(10),_attackDamage(0)	// Custom costructor
{
	std::cout << "Custom constructor of " << _name << " called." << std::endl; 
}

ClapTrap::~ClapTrap()	// Default destructor
{
	std::cout << "Default destructor of  " << _name << " called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &className):_hitPoints(className._hitPoints), \
_attackDamage(className._attackDamage), _energyPoints(className._energyPoints) 	// Copy costructor
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &className)	// Copy Assignment operator overload 
{
	std::cout << " Copy Assignment operator overload called." << std::endl;
	_hitPoints = className._hitPoints;
	_energyPoints = className._energyPoints;
	_attackDamage = className._attackDamage;
}

void	ClapTrap::attack(const std::string &targhet)
{
	if (_hitPoints == 0 || _energyPoints == 0)
		std::cout << "No 'Hit_points' or no 'Energy_points' so " << _name << " can't attak " << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << targhet << " causing " << _attackDamage << " 'Attack_damage' points of damage! " << std::endl;
		_energyPoints--;
		std::cout << "Now the striker " << _name << " has got; " << _energyPoints << " 'Energy_points' " << std::endl; 
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
		std::cout << "No 'Hit_points' or no 'Energy_points' so " << _name << " can't beRepaired of " << amount << std::endl;
	else
	{
		_hitPoints += amount;
		std::cout << _name + " is charging his 'Hit points' of " << amount << std::endl;
		_energyPoints--;
		std::cout << "Now " << _name << " has got " << _energyPoints << " 'Energy_points' and " << _hitPoints << " 'Hit_points' points left" << std::endl;
	} 
	return ;
}

