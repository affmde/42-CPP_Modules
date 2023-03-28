NAME = bureaucrat
FLAGS = -Wall -Werror -Wextra
SRCS = main.cpp Bureaucrat.cpp
OBJ = $(SRCS:.cpp=.o)
FSANITIZERFLAG = -fsanitize=address -static-libsan -g

all: $(NAME)

$(NAME): $(SRCS)
	c++ $(FLAGS) -o $(NAME) $(SRCS) -std=c++98

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

