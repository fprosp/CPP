/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:18 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/28 18:23:55 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include "../include/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_name(name),_weapon(&weapon)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << _name << " attaks with their " << _weapon->getType() << std::endl;
}
 