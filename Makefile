
NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRC = \
          check_error.c convert_tab_int.c ft_push.c ft_reverse_rotate.c \
          ft_rotate.c ft_swap.c ft_utils.c push_swap.c sort_tab.c first_step.c \
		  second_step.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -o $@ -c $<

re: fclean all

fclean: clean
	rm -f $(NAME)

clean :
	rm -rf $(OBJ)

sanitize:
	make CFLAGS="-Wall -Wextra -Werror -g3 -fsanitize=address"

valgrind:
	make CFLAGS="-Wall -Wextra -Werror -g3"

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

.PHONY: all clean fclean re
