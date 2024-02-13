NAME			=	FragTrap
SRC 			= 	main.cpp ./src/ClapTrap.cpp ./src/ScavTrap.cpp ./src/FragTrap.cpp 
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