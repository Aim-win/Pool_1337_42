# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/05 03:18:20 by momahdam          #+#    #+#              #
#    Updated: 2025/08/05 03:18:25 by momahdam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC     = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c


PRE     = srcs/

HEAD    = includes/


SRCS    = $(addprefix $(PRE), $(SRC))


OBJS    = $(SRCS:.c=.o)


NAME    = libft.a


AR      = ar rc
LIB     = ranlib
RM      = rm -f
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -I $(HEAD)


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) $(NAME)


re: fclean all

.PHONY: all clean fclean re