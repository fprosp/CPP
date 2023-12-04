# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 17:09:02 by fprosper          #+#    #+#              #
<<<<<<< HEAD:Mod_01/CPP_01/ex4/Makefile
#    Updated: 2023/12/04 17:45:17 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	replace
=======
#    Updated: 2023/11/29 19:24:21 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	swap
>>>>>>> cb37e731ce86d626c1a440e031d1c131c9726f7b:Mod_01/CPP_01/ex04/Makefile
MAIN			=	main.cpp

CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -std=c++98

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(MAIN)

all:			
				$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(MAIN)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re