/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:11 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/23 16:31:21 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <stream>
#include <string>

class HumanB
{
    private:
        std::string name;
        Weapon weapon;

    public:
        void    attack();
        HumanB(std::string type_name);
        ~HumanB();

};




#endif