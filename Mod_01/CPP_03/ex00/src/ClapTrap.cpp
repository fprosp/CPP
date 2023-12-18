/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:59:56 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/18 18:36:57 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name):_Name(Name),_Hit_points(10),_Energy_points(10),_Attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl; 
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &targhet)
{
	if (_Energy_points > 0)
	{
		std::cout << "ClapTrap" + _Name + "attacks" + targhet + "causing" + _Attack_damage + "points of damage!" << std::endl;
		_Energy_points = _Energy_points - 1;
	}
	else 
		std::cout << "No energy, can't attack." << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
		
}

