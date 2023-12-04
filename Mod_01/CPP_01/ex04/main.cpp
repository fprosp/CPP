/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:38:29 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/04 18:06:36 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	line_editor(std::string str, std::string s1, std::string s2)
{
	while (str.find(s1) != std::string::npos)
	{
		std::size_t pos = str.find(s1);
		str.erase(pos, s1.length());
		str.insert(pos, s2);
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Invalid number of arguments." << std::endl;
	else
	{
		std::ifstream	fin(argv[1]);
		if (fin.is_open())
		{
			std::string s1 = argv[2]; 
			std::string s2 = argv[3];
			std::string	filename = argv[1];
			std::ofstream fout(filename + ".replace");
			std::string	tmp;
			std::getline(fin, tmp);
			fout << line_editor(tmp, s1, s2);
			while (std::getline(fin, tmp))
			{
				if (!tmp.empty())
				{
					tmp.insert(0, "\n");
					fout << line_editor(tmp, s1, s2);
				}
				
			}
			fin.close();
			fout.close();
		}
		else
			std::cout << "File not found!" << std::endl;
	}
	return (0);
}
