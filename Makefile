
NAME = push_swap
CFLAGS = -Wall -Wextra #Werror
CPPFLAGS= -I libft/src # -I : include
CC = cc
SRC = \
          check_error.c convert_tab_int.c first_step.c ft_push.c ft_reverse_rotate \
          ft_rotate.c ft_swap.c ft_utils.c push_swap.c sort_tab.c

OBJ = $(SRC:.c=.o)
LIBFT = libft/libft.a

all : $(NAME)

%.o : %.c push_swap.h
    $(CC) $(CFLAGS) $(CPPFLAGS)-o $@ -c $<

re: fclean all

fclean: clean
    rm -f $(NAME)
    make fclean -C libft #appel le make de libft

clean :
    rm -rf $(OBJ)

sanitize:
    make CFLAGS="-Wall -Wextra -Werror -g3 -fsanitize=address"

FORCE :

$(LIBFT) : FORCE #commande vide pour qu'il execute a chaque fois make
    make -C libft # -C : make dans un autre dossier.

$(NAME) : $(LIBFT) $(OBJ)
    $(CC) $(CFLAGS) $(CPPFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

.PHONY: all clean fclean re FORCE

#NAME = push_swap
#CPPFLAGS= -I libft
#CFLAGS = -Wall -Wextra -Werror

#SRC = \
      check_error.c convert_tab_int.c first_step.c ft_push.c ft_reverse_rotate \
      ft_rotate.c ft_swap.c ft_utils.c push_swap.c sort_tab.c

#OBJ = $(SRC:.c=.o)

#LIBFT=libft/libft.a

#all : $(NAME)

#%.o : %.c push_swap.h
#	$(CC) $(CFLAGS) -o $@ -c $<

#$(NAME):$(OBJ)
#	$(AR) rcs $(NAME) $(OBJ)

#.PHONY : all clean fclean re FORCE

#clean :
#	rm -rf $(OBJ)

#fclean : clean
#	rm -rf $(NAME)


#re : fclean
#	$(MAKE) all

#FORCE :

#$(LIBFT) : FORCE
#	make -C Library
