/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:44:36 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/27 16:54:12 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"
#include <iostream> 

HumanB::HumanB(std::string name):_name(name), _weapon_type(NULL)
{
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon &weapon_name)
{
    _weapon_type = &weapon_name;
}

void    HumanB::attack()
{
    std::cout << _name << " attaks with their " << _weapon_type << std::endl;
}
