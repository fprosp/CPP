/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:42:09 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/13 13:55:06 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class   Fixed
{
	private:
		int _fixed;
		static const int _fractional = 8;
	
	public:
		Fixed();  
		Fixed(const int n); 		               // Costructor
		Fixed(const float q);
		Fixed(const Fixed &class_name);            // Copy Constructor
		Fixed &operator=(const Fixed &class_name); // Copy Assignment 
		~Fixed();                                  // Destructor

		float   toFloat( void ) const;
		int		toInt( void ) const;    
		int		getRawBits() const;
		void	setRawBits(int const raw);





};

#endif