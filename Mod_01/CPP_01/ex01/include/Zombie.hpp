/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:39:06 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/15 17:03:13 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie 
{
    private:
        std::string zombie_Name;

    public:
        void announce();
        Zombie (std::string zombie_Name);
        ~Zombie ();
};

Zombie* newZombie( std::string zombie_Name );
Zombie	*zombieHorde(int n, std::string zombie_Name);

#endif
