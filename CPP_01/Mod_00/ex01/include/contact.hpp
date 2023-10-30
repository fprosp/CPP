/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:25:05 by fprosper          #+#    #+#             */
/*   Updated: 2023/10/30 19:40:54 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include "phonebook.hpp" 
class contact
{
	private:
		std::string name;
		std::string	last_name;
		std::string	nikname;
		std::string	phone_number;
		std::string	darkeset_secret;
	public:
		void	set_name(std::string new_name) {
			name = new_name; }
		std::string 	show_name() {
			return (name); }
		void	set_last_name(std::string new_last_name) {
			last_name = new_last_name; }
		std::string 	show_last_name() {
			return(last_name); }
		void	set_nick_name(std::string new_nick_name) {
			nikname = new_nick_name; }
		std::string 	show_nickname() {
			return(nikname); }
		void	set_phone_number(std::string new_phone_number) {
			phone_number = new_phone_number; }
		std::string 	show_phone_number() {
			return(phone_number); }
		void	set_darkest_secret(std::string new_darkest_secret) {
			darkeset_secret = new_darkest_secret; }
		std::string 	show_darkeset_secret() {
			return(darkeset_secret); }
};

#endif