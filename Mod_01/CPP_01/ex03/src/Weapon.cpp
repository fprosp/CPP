/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:22 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/27 17:35:28 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type_name):_type_name(type_name) 
{
}

Weapon::~Weapon()
{
    std::cout << "Weapon destructor" << std::endl;
}

void    Weapon::setType(std::string type_name)
{
    _type_name = type_name;
}

const std::string	&Weapon::getType()
{
    return (_type_name);
}
