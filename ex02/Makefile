NAME = animal
FLAGS = -Wall -Werror -Wextra
SRCS = main.cpp Cat.cpp Dog.cpp AAnimal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(SRCS)
	c++ $(FLAGS) -o $(NAME) $(SRCS) -std=c++98

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

