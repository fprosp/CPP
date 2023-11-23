/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:14 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/23 16:26:10 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <stream>
#include <string>

class HumanA
{
    private: 
        std::string name;
        std::string Weapon;
    public:
        void attack();
        HumanA(std::string type_name);
        ~HumanA();
};




#endif