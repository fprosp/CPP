/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:09:52 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/15 15:53:32 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

// Inizializzazione degli attributi riferiti all'oggetto

Zombie::Zombie(std::string name):Name(name)
{
}

Zombie::~Zombie()
{
    std::cout<< Name + " was destroyed!"<< std::endl;   
}

void    Zombie::announce()
{
    std::cout<< Name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}