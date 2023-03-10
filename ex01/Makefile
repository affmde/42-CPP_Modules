NAME = zombie
FLAGS = -Wall -Werror -Wextra
SRCS = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(SRCS)
	c++ $(FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

