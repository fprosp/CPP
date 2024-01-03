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
        Fixed();                                   // Default costructor
        ~Fixed();                                  // Default destructor
        Fixed(const Fixed &class_name);            // Copy constructor
		Fixed &operator=(const Fixed &class_name); // Copy assignment

        int		getRawBits() const;
		void	setRawBits(int const raw);     
};

#endif