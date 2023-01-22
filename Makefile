.PHONY: clean all re fclean
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRC = push_swap.c push.c swap.c reverse.c rotate.c arrays.c errors.c sort.c bigsmall.c mouve.c common.c
LIB_PATH = ./libft/libft.a

all: $(NAME)
	@echo "push_swap : done"
$(NAME):
	@make -C libft
	@CC $(CFLAGS) -o $(NAME) $(SRC) $(LIB_PATH)

clean:
	@make clean -C libft

fclean:
	@rm -f $(NAME)
	@make fclean -C libft
	@echo "$(NAME) deleted"

re: fclean all