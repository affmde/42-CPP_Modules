NAME = zombie
FLAGS = -Wall -Werror -Wextra
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(SRCS)
	c++ $(FLAGS) -o $(NAME) $(SRCS) -std=c++98

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

