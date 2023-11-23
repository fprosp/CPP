/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:18 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/23 18:57:14 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include "../include/Weapon.hpp"

HumanA::HumanA(std::string person_name, Weapon weapon_name):name(person_name),weapon(weapon_name)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    cout << name << " attaks with their " << type << std::endl;
}
 