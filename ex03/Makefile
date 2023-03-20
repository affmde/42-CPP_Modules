NAME = diamondTrap
FLAGS = -Wall -Werror -Wextra
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp Fragtrap.cpp diamondTrap.cpp
OBJ = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(SRCS)
	c++ $(FLAGS) -o $(NAME) $(SRCS) -std=c++98

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

