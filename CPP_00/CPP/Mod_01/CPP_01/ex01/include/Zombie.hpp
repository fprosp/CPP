/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:39:06 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/21 17:00:30 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie 
{
    private:
        std::string zName;

    public:
        void setName(std::string Name);
        void announce(int i);
        
        Zombie ();
        ~Zombie ();
};

Zombie	*zombieHorde(int n, std::string Name);

#endif
