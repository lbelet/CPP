NAME = Zombie

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp

all: $(NAME)

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJ)$^ -o  $(NAME)

%.o:%.cpp
	@$(CC) $(CFLAGS) -c $^ -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re