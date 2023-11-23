/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:22 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/23 18:48:59 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type_name):type(type_name)
{
}

Weapon::~Weapon()
{
}

const std::string	Weapon::&getType()
{
    return(type);
}

void    Weapon::setType(std::string newtype)
{
    type = newtype;
    return ;
}