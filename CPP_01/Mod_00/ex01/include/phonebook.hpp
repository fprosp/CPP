/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:57:14 by fprosper          #+#    #+#             */
/*   Updated: 2023/10/09 19:58:16 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <limits>
#include <string>

class phonebook
{
	public:
		contact contact[8];
		int 	nc, i;
};

void	save_contacts(phonebook *pb);
void	show_search(phonebook *pb);

#endif