CC = cc
CFLAGS = -Wall -Wextra -Werror -std=c99
SRC = ft_check.c ft_solve.c ft_utils3.c ft_utils5.c main.c ft_file_handle.c ft_map.c ft_utils2.c ft_utils4.c ft_utils.c
OBJ = $(SRC:.c=.o)
NAME = bsq

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re