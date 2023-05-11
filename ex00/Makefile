
#Color scheme
COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_BLUE=\033[0;34m
COLOUR_END=\033[0m

NAME = scalar

#Flags
FLAGS = -Wall -Werror -Wextra -std=c++98 -I.
CC = c++
INCS = ScalarConverter.hpp
OBJS = ScalarConverter.o main.o

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) -o $@ $^ $(FLAGS)
	@echo "$(COLOUR_GREEN)$@ created$(COLOUR_END)"

%.o: %.cpp $(INCS)
	@$(CC) -c -o $@ $< $(FLAGS)
	@echo "$(COLOUR_BLUE)$@ created$(COLOUR_END)"


clean:
	@rm -f $(OBJS)
	@echo "$(COLOUR_BLUE)objects deleted$(COLOUR_END)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOUR_RED)$(NAME) removed$(COLOUR_END)"


re: fclean all
