/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:25:05 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/22 15:06:47 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>

class Contact
{
	private:
		std::string name;
		std::string	last_name;
		std::string	nikname;
		std::string	phone_number;
		std::string	darkeset_secret;
	public:
		void	set_name(std::string new_name);
		void	set_last_name(std::string new_last_name);
		void	set_nick_name(std::string new_nick_name);
		void	set_phone_number(std::string new_phone_number);
		void	set_darkest_secret(std::string new_darkest_secret);
		std::string 	show_name();
		std::string 	show_last_name();
		std::string 	show_nickname();
		std::string 	show_phone_number();
		std::string 	show_darkeset_secret();
};

#endif