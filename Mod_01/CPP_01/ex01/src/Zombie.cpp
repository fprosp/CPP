/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:09:52 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/15 17:48:29 by fprosper         ###   ########.fr       */
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

void    Zombie::announce()
{
    std::cout<< zName + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    setName(std::string nName)
{
    zName = nName;
}
