/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:39:21 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/19 19:47:52 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        std::string _name;
        int 		_hitPoints, _energyPoints, _attackDamage;
        
    public:
        ScavTrap(); 
        ScavTrap(std::string name);
        ~ScavTrap();
    
        void guardGate();

};

#endif
