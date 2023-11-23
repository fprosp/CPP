/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:09 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/23 16:20:22 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
    private: 
        std::string type;

    public:
        Weapon(std::string type_name);
        ~Weapon();
        void                setType(std::string newtype);
        const std::string	&getType();

};

#endif
