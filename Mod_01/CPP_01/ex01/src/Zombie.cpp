/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:09:52 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/15 17:07:02 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(std::string zombie_Name):zombie_Name(zombie_Name)
{
}

Zombie::~Zombie()
{
    std::cout<< zombie_Name + " was destroyed!"<< std::endl;   
}

void    Zombie::announce()
{
    std::cout<< zombie_Name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
