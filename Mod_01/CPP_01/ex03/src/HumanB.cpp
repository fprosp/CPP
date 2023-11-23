/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:20 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/23 16:23:28 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string person_name):Name(person_name)
{
}

HumanB::~HumanB()
{
}


void    HumanB::attack()
{
    cout << name << " attaks with their " << Weapon << std::endl;
}
