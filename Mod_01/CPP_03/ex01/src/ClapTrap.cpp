/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:59:56 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/19 12:47:32 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name):_Name(Name),_Hit_points(10),_Energy_points(10),_Attack_damage(0)
{
	std::cout << "Default constructor of " << _Name << " called." << std::endl; 
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor of  " << _Name << " called." << std::endl;
}

void	ClapTrap::attack(const std::string &targhet)
{
	if (_Hit_points == 0 || _Energy_points == 0)
		std::cout << "No 'Hit_points' or no 'Energy_points' so " << _Name << " can't attak " << std::endl;
	else
	{
		std::cout << "ClapTrap " << _Name << " attacks " << targhet << " causing " << _Attack_damage << " 'Attack_damage' points of damage! " << std::endl;
		_Energy_points--;
		std::cout << "Now the striker " << _Name << " has got; " << _Energy_points << " 'Energy_points' " << std::endl; 
	} 
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_Attack_damage = amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_Hit_points == 0 || _Energy_points == 0)
		std::cout << "No 'Hit_points' or no 'Energy_points' so " << _Name << " can't beRepaired of " << amount << std::endl;
	else
	{
		_Hit_points += amount;
		std::cout << _Name + " is charging his 'Hit points' of " << amount << std::endl;
		_Energy_points--;
		std::cout << "Now " << _Name << " has got " << _Energy_points << " 'Energy_points' and " << _Hit_points << " 'Hit_points' points left" << std::endl;
	} 
	return ;
}

