/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:12:57 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/19 19:00:58 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() : FixNum(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    FixNum = value << Fixed::Bits;
}

Fixed::Fixed(const float value)            
{
    std::cout << "Float constructor called" << std::endl;
    FixNum = roundf(value * (1 << Fixed::Bits));
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
        this->FixNum = assign.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->FixNum);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->FixNum = raw;
}

int Fixed::toInt() const
{
    return (this->FixNum >> Fixed::Bits);
}

float   Fixed::toFloat() const
{
    return ((float)this->FixNum / (1 << Fixed::Bits));
}

std::ostream &operator <<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return (os);
}