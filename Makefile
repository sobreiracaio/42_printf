# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 22:55:39 by admin             #+#    #+#              #
#    Updated: 2023/05/13 16:53:58 by crocha-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putptr.c ft_putnbr.c ft_putunbr.c ft_uitoa.c ft_puthex.c

OBJS = ${SRC:.c=.o}

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I .
MAKE = make -C
LIBFT_PATH = libft
LIBFT = ${LIBFT_PATH}/libft.a

.o:.c
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		${MAKE} ${LIBFT_PATH} all
		cp ${LIBFT} ${NAME}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${MAKE} ${LIBFT_PATH} clean
		${RM} ${OBJS}

fclean: clean
		${MAKE} ${LIBFT_PATH} fclean
		${RM} ${NAME}

re: fclean all

teste: re fclean
		${CC} ${CFLAGS} ${INCLUDE} ${NAME} -o teste

.PHONY: all clean fclean re bonus