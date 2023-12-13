/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:50:10 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/13 15:17:04 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed():_fixed(0)
{
    std::cout << "Default constructor called" << std::endl; 
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &class_name)                //copy constructor
{                   
    std::cout << "Copy constructor called" << std::endl;
    _fixed = class_name._fixed;
}

Fixed &Fixed::operator=(const Fixed &class_name)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _fixed = class_name._fixed;
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
