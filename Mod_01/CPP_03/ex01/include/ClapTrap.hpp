/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:40:05 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/19 11:22:39 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
class	ClapTrap
{
	private:
		std::string _Name;
		int 		_Hit_points;
		int			_Energy_points;
		int			_Attack_damage;
	public:
		ClapTrap(std::string Name);				// Default constructor 
		~ClapTrap();							// Default destructor
		
		void 	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
