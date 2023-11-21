/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_search.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:45:49 by fprosper          #+#    #+#             */
/*   Updated: 2023/10/12 19:36:48 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

void	show_index_info(phonebook *pb)
{
	int i;

	while (1)
	{
		std::cin >> i;
		while (!std::cin.good())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\nYou did not insered a number, please insert a number: ";
			std::cin >> i;
		}
		if (i >= 1 && i <= pb->nc)
		{
			std::cout << "\nName: " <<  pb->contact[i - 1].show_name();
			std::cout << "\nLast name: " <<  pb->contact[i - 1].show_last_name() << "\n";
			std::cout << "Nickname: " <<  pb->contact[i - 1].show_nickname() << "\n";
			std::cout << "Phone number: " <<  pb->contact[i - 1].show_phone_number() << "\n";
			std::cout << "Darkest secret: " <<  pb->contact[i - 1].show_darkeset_secret();
			return ;
		}
		std::cout << "\nYou inserted an index out of range.\n \
  Please insert a correct index: ";
	}
}

void	get_format(std::string str)
{
	if (str.length() < 10)
		std::cout << str ;
	else
		std::cout << str.substr(0, 9) + ".";
	return ;
}

void	show_farmacted_contact(phonebook *pb)
{
	int i;

	i = -1;
	while (++i <pb->nc)
	{
		std::cout << "  " << (i + 1) << "  |  ";
		get_format(pb->contact[i].show_name());
		std::cout << " | ";
		get_format(pb->contact[i].show_last_name());
		std::cout << " | ";
		get_format(pb->contact[i].show_nickname());
		std::cout << "\n";
	}
	return ;
}

void	show_search(phonebook *pb)
{
	std::string str;

	if (pb->nc == 0)
	{
		std::cout << " - You do not have any saved contact. \n\
  ADD some contacts before.\n";
		return ;
	}
	std::cout << "\n   INDEX    |   NAME   |   LAST NAME   |  NIKNAME   \n\n";
	show_farmacted_contact(pb);
	std::cout << "\n - Insert the contact index to show: ";
	show_index_info(pb);
	std::cin.clear();
	std::cin.ignore();
	return ;
}
