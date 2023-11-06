# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 16:57:53 by fprosper          #+#    #+#              #
#    Updated: 2023/11/06 17:04:53 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	src.a

SRCS			=	show_search.cpp save_contacts.cpp 
OBJS			= 	$(SRCS:.cpp=.o)

CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -std=c++98

all:			$(OBJS)
				ar rc $(NAME) $(OBJS)
clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re