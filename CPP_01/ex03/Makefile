# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 19:10:20 by fprosper          #+#    #+#              #
#    Updated: 2023/12/06 17:42:36 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fire

SRC 		=	src/HumanA.cpp src/HumanB.cpp src/Weapon.cpp main.cpp
OBJ			=	$(SRC:.cpp=.o)

CC			=	c++
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC)

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
