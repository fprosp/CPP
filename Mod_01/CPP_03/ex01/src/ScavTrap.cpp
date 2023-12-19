/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:57:15 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/19 19:53:55 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap():ScavTrap(),_name("Scavvy"),_hitPoints(100),_energyPoints(50),_attackDamage(20)   // Default costructor
{
    std::cout << "Default constructor of " << _name << " called." << std::endl; 
}

ScavTrap::ScavTrap(std::string name):ScavTrap(name),_name(name),_hitPoints(100),_energyPoints(50),_attackDamage(20) // Custom costructor
{
    std::cout << "Default constructor of " << _name << " called." << std::endl; 
}


