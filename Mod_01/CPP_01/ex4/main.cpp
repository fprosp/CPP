/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:38:29 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/04 17:50:16 by fprosper         ###   ########.fr       */
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

int main(int argc, char **argv)
{
	if (argc!= 4)
		std::cout << "Invalid number of arguments." << std::endl;
	else
	{   
		std::ifstream fin(argv[1]);
		if (fin.is_open())
		{
			std::string s1 = argv[2];
			std::string s2 = argv[3];
			std::string fname = argv[1];
			std::string newFile = fname + ".replace";
			std::ofstream fout(newFile);
			std::string tmp;
			std::getline(fin, tmp); 			// Assegna a "tmp" la prima riga del file puntato dallo stream "fin". 
			fout << line_editor(tmp, s1, s2); 	// Scrive la linea modificata al file puntato dallo stream "fout". 
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
		{
			std::cout << "File not found" << std::endl;
			return (1);
		}
	}
	return (0);
}
