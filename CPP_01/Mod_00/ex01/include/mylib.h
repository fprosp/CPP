/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:18:32 by fprosper          #+#    #+#             */
/*   Updated: 2023/10/12 19:38:09 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYLIB_H
# define MYLIB_H

#include <iostream>
#include <limits>
#include "PhoneBook.hpp"

void	save_contacts(PhoneBook *pb);
void	show_search(PhoneBook *pb);

#endif
