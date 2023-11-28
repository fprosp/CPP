/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:38:29 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/28 19:06:20 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define EXIT_OK 0
#define EXIT_FAIL 1
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc!= 4)
        std::cout << "Invalid number of arguments." << std::endl;
    else
    {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::ifstream	readFile(filename);
        if (readFile.is_open() != 0)
        {
            


        }
        else
            std::cout << "File not found" << std::endl;
    }
    

    
    


    return (EXIT_OK);
}