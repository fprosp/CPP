/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:18 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/23 16:23:16 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string person_name):Name(person_name)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    cout << name << " attaks with their " << Weapon << std::endl;
}
 