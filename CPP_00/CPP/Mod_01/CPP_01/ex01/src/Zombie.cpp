/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:09:52 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/21 17:03:05 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout<< zName + " was destroyed!"<< std::endl;
}

void    Zombie::setName(std::string name)
{
    zName = name;
}

void    Zombie::announce(int n)
{
    std::cout << zName << n + 1 << std::endl;
}
