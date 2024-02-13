/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:42:27 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/06 17:35:49 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{

    if (argc != 2)
		std::cout << "Invalid number of arguments." << std::endl;
    else
    {
        Harl harl;
        std::string arg(argv[1]);
        int i = 0;
        
        if (!(arg.compare("DEBUG")))
            i = 1;
        if (!(arg.compare("INFO")))
            i = 2;
        if (!(arg.compare("WARNING")))
            i = 3;
        if (!(arg.compare("ERROR")))
            i = 4;
        switch (i)
        {
            case (1):
                harl.complain("DEBUG");
                std::cout << std::endl;
            case (2):
                harl.complain("INFO");
                std::cout << std::endl;
            case (3):
                harl.complain("WARNING");
                std::cout << std::endl;
            case (4):
                harl.complain("ERROR");
                std::cout << std::endl;
                break;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
    }
    return (0);
}
