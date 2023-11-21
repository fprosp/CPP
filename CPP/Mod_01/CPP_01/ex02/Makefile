# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 17:09:02 by fprosper          #+#    #+#              #
#    Updated: 2023/11/21 19:00:14 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	brain
MAIN			=	main.cpp

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