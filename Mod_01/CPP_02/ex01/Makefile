# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 14:44:54 by fprosper          #+#    #+#              #
#    Updated: 2023/12/13 15:05:15 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	a.out
SRC 			= 	main.cpp ./src/Fixed.cpp
OBJS 			= 	$(SRC:.cpp=.o)

CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -std=c++98

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:			
				$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(MAIN)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re