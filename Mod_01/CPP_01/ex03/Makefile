# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 19:10:20 by fprosper          #+#    #+#              #
#    Updated: 2023/11/23 18:54:17 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fire
MAIN		=	main.cpp

SRC 		=	src/HumanA.cpp src/HumanB.cpp src/Weapon.cpp
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
