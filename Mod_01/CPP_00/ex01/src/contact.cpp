/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:44:47 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/22 14:57:11 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/contact.hpp"

void	Contact::set_name(std::string new_name) 
{
    name = new_name;
}

void	Contact::set_last_name(std::string new_last_name) 
{
    last_name = new_last_name; 
}

void	Contact::set_nick_name(std::string new_nick_name) 
{
    nikname = new_nick_name; 
}

void	Contact::set_phone_number(std::string new_phone_number) 
{
	phone_number = new_phone_number; 
}

void	Contact::set_darkest_secret(std::string new_darkest_secret) 
{
	darkeset_secret = new_darkest_secret;
}

std::string 	Contact::show_name()
{
	return (name);
}

std::string 	Contact::show_last_name() 
{
	return(last_name);
}

std::string 	Contact::show_nickname() 
{
	return(nikname);
}

std::string 	Contact::show_phone_number()
{
	return(phone_number); 
}

std::string 	Contact::show_darkeset_secret()
{
	return(darkeset_secret);
}
