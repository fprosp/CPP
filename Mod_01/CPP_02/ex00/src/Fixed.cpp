/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:50:10 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/19 19:33:01 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed():_fixed(0)    // Default costructor
{
    std::cout << "Default constructor called" << std::endl; 
}

Fixed::~Fixed() // Default destructor
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &className):_fixed(className._fixed)   // Copy constructor
{                   
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &className) // Copy assigment operator overload
{
    std::cout << "Copy assignment operator called" << std::endl;
    _fixed = className._fixed;
    return (*this);
}

int		Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(_fixed);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _fixed = raw;
}
