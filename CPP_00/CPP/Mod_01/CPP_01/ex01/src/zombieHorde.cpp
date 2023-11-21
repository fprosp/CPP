/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:21:21 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/21 17:00:51 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    int i;
    Zombie *orda = new Zombie[N];

    for(i=0;i<N;i++)
    {
        orda[i].setName(name);
        orda[i].announce(i);
    }
    return (orda);
}