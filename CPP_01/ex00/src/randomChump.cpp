/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:00:56 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/15 15:34:48 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
    return ;  
}