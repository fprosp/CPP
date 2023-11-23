/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:57:14 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/22 15:06:12 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <limits>
#include <string>

class phonebook
{
	public:
		Contact contact[8];
		int 	nc, i;
};

void	save_contacts(phonebook *pb);
void	show_search(phonebook *pb);

#endif