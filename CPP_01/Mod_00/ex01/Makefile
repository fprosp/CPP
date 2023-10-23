# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 16:57:53 by fprosper          #+#    #+#              #
#    Updated: 2023/10/05 19:40:27 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	phonebook

MAIN			=	main.cpp
SRCS			=	./src/show_search.cpp ./src/save_contacts.cpp 
OBJS			= 	$(SRCS:.cpp=.o)

CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -std=c++98 -I phonebook.hpp

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(MAIN)

all:			$(NAME)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re