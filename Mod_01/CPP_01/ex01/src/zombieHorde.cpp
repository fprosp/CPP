/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:21:21 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/15 17:46:07 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie *zombieHorde(int N, std::string nName)
{
    int i;
    Zombie *orda = new Zombie[N];

    for(i=0;i<N;i++)
    {
        orda[i].setName(nName);
    }
}