# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 17:09:02 by fprosper          #+#    #+#              #
#    Updated: 2023/12/06 17:45:34 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	replace
SRC 			= 	main.cpp
OBJ 			= 	$(SRC:.cpp=.o)

CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -std=c++98

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all:			
				$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(MAIN)

clean:			
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re