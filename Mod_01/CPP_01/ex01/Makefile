# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 18:35:40 by fprosper          #+#    #+#              #
#    Updated: 2023/11/21 17:06:20 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Zombie
MAIN		=	main.cpp

SRC 		=	./src/Zombie.cpp ./src/zombieHorde.cpp
OBJ			=	$(SRC:.cpp=.o)

CC			=	c++
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(MAIN)

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
