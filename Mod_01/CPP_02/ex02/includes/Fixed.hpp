/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/12/19 18:50:20 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:

		int					FixNum;
		static const int	Bits = 8;

	public:

		Fixed();								// Default costructor
		Fixed(const int value);					// Custom costructor
		Fixed(const float value);				// Custom costructor
		Fixed(const Fixed &original); 			// Copy Constructor
		Fixed &operator=(const Fixed &assign); 	// Copy Assignment
		~Fixed();
		

		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;
		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		static Fixed		&min(Fixed &fr, Fixed &sr);
		static const Fixed	&min(const Fixed &fr,const Fixed &sr);
		static Fixed		&max(Fixed &fr, Fixed &sr);
		static const Fixed	&max(const Fixed &fr,const Fixed &sr);

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed &myClass);

#endif