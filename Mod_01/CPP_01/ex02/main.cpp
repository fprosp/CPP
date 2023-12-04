/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:13:15 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/04 15:15:02 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *brainPTR = &brain;
    std::string &brainREF = brain;

    std::cout << "Indirizzo di memoria di brain: " << &brain << std::endl;
    std::cout << "Indirizzo di memoria di brainPTR: " << brainPTR << std::endl;
    std::cout << "Indirizzo di memoria di brainREF: " << &brainREF << std::endl;

    std::cout << "Contenuto di brain: " << brain << std::endl;
    std::cout << "Contenuto di brainPTR: " << *brainPTR << std::endl;
    std::cout << "Contenuto di brainREF: " << brainREF << std::endl;

    return (0);
}
