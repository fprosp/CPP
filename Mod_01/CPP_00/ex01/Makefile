# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 16:57:53 by fprosper          #+#    #+#              #
#    Updated: 2023/11/21 18:59:53 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	Phonebook
MAIN			=	main.cpp

SRC				=	./src/show_search.cpp ./src/save_contacts.cpp
OBJS			=	$(SRC:.cpp=.o)

CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -std=c++98

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(MAIN)

all:			
				$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(MAIN)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re