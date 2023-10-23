# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 15:58:52 by fprosper          #+#    #+#              #
#    Updated: 2023/09/28 20:00:23 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
FILES = megaphone.cpp

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: 
	$(CC) $(CFLAGS) -o $(NAME) $(FILES)

clean:
	$(RM) $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
