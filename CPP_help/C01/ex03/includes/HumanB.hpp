/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:20:59 by arecce            #+#    #+#             */
/*   Updated: 2023/11/27 16:30:21 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:

		std::string	_name;
		Weapon		*_weapon; //pointer

	public:

		void    setWeapon(Weapon &weapon); //reference
		void    attack();

		HumanB(std::string name);
		~HumanB();
};

#endif