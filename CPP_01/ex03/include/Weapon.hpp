/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:09 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/28 18:26:49 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
    private: 
        std::string _type;

    public:
        Weapon(std::string type_name);
        ~Weapon();
        
        void                setType(std::string newtype);
        const std::string	&getType();

};

#endif
