/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:41:22 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/13 15:11:13 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Fixed.hpp"

int main(void)
{
    Fixed a;		    //default
	Fixed b( a );	    //copy constructor
	Fixed c;		    //default

	c = b;			    //copy assignment
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
    return (0);
}