/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:18 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/27 16:53:19 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include "../include/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_name):_name(name),_weapon_type(&weapon_name)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << _name << " attaks with their " << _weapon_type << std::endl;
}
 