/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:53:20 by fprosper          #+#    #+#             */
/*   Updated: 2023/10/12 19:39:03 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/mylib.h"

void	welcome_message()
{
	std::cout <<"Hello! This is your AWfull phonebook.\n\
- This shit can store 8 contacts\n\n\
- Any other contact added over the 8th will delete\n\
 the first added to get space for the 9th\n\n\
- Please enter the contact you want to: ADD or SEARCH.\n\
- Press EXIT to quit\n"; 
}

int main(void)
{	
	PhoneBook pb;
	std::string cmd;

	welcome_message();
	pb.nc = 0;
	pb.i = 0;
	while (1)
	{
		std::cout << "\nEnter command: ";
		getline(std::cin, cmd);
		if (cmd == "ADD" || cmd == "add")
			save_contacts(&pb);
		else if (cmd == "SEARCH" || cmd == "search")
			show_search(&pb);
		else if (cmd == "EXIT" || cmd == "exit")
			break ;
		else
			std::cout << "Invalid command. Insert one of the given command: ";
	}
	std::cout << "Your phonebook will be now destroyed, bye bye.. \n";
	return (0);
}
