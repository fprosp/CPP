/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:22 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/28 18:24:31 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type_name):_type(type_name) 
{
}

Weapon::~Weapon()
{
    std::cout << "Weapon destructor" << std::endl;
}

void    Weapon::setType(std::string type)
{
    _type = type;
}

const std::string	&Weapon::getType()
{
    return (_type);
}
