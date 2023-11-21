/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:19:33 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/21 16:57:12 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Zombie.hpp"

int main(void)
{   
    Zombie *orda = zombieHorde(5, "Zombie");
    delete[] orda;
    return (0);
}
