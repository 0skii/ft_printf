# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ozerbib- <ozerbib-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 14:50:55 by ozerbib-          #+#    #+#              #
#    Updated: 2023/01/25 14:50:57 by ozerbib-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_putchar.c ft_putptr.c ft_putstr.c \
		ft_putuint.c ft_putnbr_base.c ft_putlu.c

OBJS = $(SRCS:.c=.o)
INC = ft_printf.h
CC = cc
CFLAGS = -Wall -Wextra -Werror
NORM = norminette -R

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
		
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re