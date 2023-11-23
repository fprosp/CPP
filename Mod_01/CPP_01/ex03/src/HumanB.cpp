/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:44:36 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/23 18:49:01 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string person_name):name(person_name)
{
}


HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon weapon_name)
{
    weapon = weapon_name;
}

void    HumanB::attack()
{
    cout << name << " attaks with their " << type << std::endl;
}
