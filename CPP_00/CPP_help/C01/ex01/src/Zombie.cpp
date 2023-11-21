/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:17:10 by arecce            #+#    #+#             */
/*   Updated: 2023/11/21 17:05:23 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << Name + " was destroyed!" << std::endl;
}

void	Zombie::setName(std::string name)
{
	Name = name;
}

std::string	Zombie::getName()
{
	return Name;
}

void	Zombie::announce(int n)
{
	std::cout << Name << " " << n + 1 << std::endl;
}