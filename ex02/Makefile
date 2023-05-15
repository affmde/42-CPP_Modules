
#Color scheme
COLOUR_GREEN=\033[1;32m
COLOUR_RED=\033[1;31m
COLOUR_YELLOW=\033[0;33m
COLOUR_BLUE=\033[0;34m
COLOUR_END=\033[0m

NAME = array

#Flags
FLAGS = -Wall -Werror -Wextra -I.
CC = c++
INCS = Array.hpp
OBJS = main.o

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) -o $@ $^ $(FLAGS) -std=c++98
	@echo "$(COLOUR_GREEN)✓	$@ created$(COLOUR_END)"

%.o: %.cpp $(INCS)
	@$(CC) -c -o $@ $< $(FLAGS)
	@echo "$(COLOUR_GREEN)[OK]$(COLOUR_END)	$(COLOUR_YELLOW)$@ created$(COLOUR_END)"

%.o: %.tpp $(INCS)
	@$(CC) -c -o $@ $< $(FLAGS)
	@echo "$(COLOUR_GREEN)[OK]$(COLOUR_END)	$(COLOUR_YELLOW)$@ created$(COLOUR_END)"
	
clean:
	@rm -f $(OBJS)
	@echo "$(COLOUR_BLUE)objects deleted$(COLOUR_END)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOUR_RED)$(NAME) removed$(COLOUR_END)"


re: fclean all
