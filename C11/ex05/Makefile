# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/07 18:11:33 by momahdam          #+#    #+#              #
#    Updated: 2025/08/07 18:11:37 by momahdam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = srcs/ft_atoi.c srcs/ft_util.c srcs/ft_math.c srcs/main.c

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all


.PHONY: all clean fclean re
