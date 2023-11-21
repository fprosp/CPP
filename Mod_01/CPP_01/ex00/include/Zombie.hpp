/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:39:06 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/15 15:06:55 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie 
{
    private:
        std::string Name;

    public:
        void announce();
        Zombie (std::string Name);
        ~Zombie ();
};

Zombie* newZombie( std::string name );
void    randomChump(std::string name);

#endif
