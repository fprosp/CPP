/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:11 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/28 18:26:43 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon     *_weapon;

    public:
        void attack();
        void setWeapon(Weapon &weapon);
        
        HumanB(std::string humanName);
        ~HumanB();
};

#endif