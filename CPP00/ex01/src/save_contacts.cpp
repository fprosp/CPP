/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_contacts.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:41:08 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/22 15:02:40 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"
#include "../include/contact.hpp"


std::string		get_full_input()
{
	std::string tmp;

	while (1)
	{
		getline(std::cin, tmp);
		if (!tmp.empty())
			break ;
		std::cout << "\nInsert a full input line\n";
	}
	return (tmp);
}

void	save_contacts(phonebook *pb)
{
	std::cout << "\nSet name: ";
	pb->contact[pb->i].set_name(get_full_input());
	std::cout << "Set last name: ";
	pb->contact[pb->i].set_last_name(get_full_input());
	std::cout << "Set nick name: ";
	pb->contact[pb->i].set_nick_name(get_full_input());
	std::cout << "Set phone number: ";
	pb->contact[pb->i].set_phone_number(get_full_input());
	std::cout << "Set darkest secret: ";
	pb->contact[pb->i].set_darkest_secret(get_full_input());
	std::cout << "- Contact added!!\n";
	if (++pb->i > 7)
		pb->i = 0;
	if (pb->nc < 8)
		pb->nc++;
}
