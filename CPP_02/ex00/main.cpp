/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:41:22 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/19 18:59:57 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Fixed.hpp"

int main(void)
{
    Fixed a;		// Chiama il default costructor
	Fixed b( a );	// Chiama il copy constructor, inizializza gli attributi privati di 'b' con quelli di 'a'.
	Fixed c;		// Chiama il default costructor 

	c = b;			// Chiama il copy assignment operator overload, assegna, in esecuzione, agli attributi privati di 'c' quell di 'b'
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
    return (0);
}