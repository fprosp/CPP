/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:28:38 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/13 19:33:36 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    _fixed = value << Fixed::_fractional;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    _fixed = roundf(value * (1 << Fixed::_fractional));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &original)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = original;
}

Fixed &Fixed::operator=(const Fixed &assign)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &assign)
        this->_fixed = assign.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed = raw;
}

int Fixed::toInt() const
{
    return (this->_fixed >> Fixed::_fractional);
}

float   Fixed::toFloat() const
{
    return ((float)this->_fixed / (1 << Fixed::_fractional));
}

std::ostream &operator <<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return (os);
}