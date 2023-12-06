/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:44:47 by fprosper          #+#    #+#             */
/*   Updated: 2023/12/06 17:02:56 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef HARL_HPP
# define HARL_HPP

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void complain(std::string state);
        
        Harl();
        ~Harl();
};

#endif
