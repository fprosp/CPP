/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:14 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/27 16:53:44 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private: 
        std::string _name;
        Weapon     *_weapon_type;
        
    public:
        void attack();
        
        HumanA(std::string name, Weapon &weapon_type);
        ~HumanA();

};

#endif