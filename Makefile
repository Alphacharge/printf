# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 13:46:08 by rbetz             #+#    #+#              #
#    Updated: 2022/04/14 13:46:11 by rbetz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libftprintf.a"
SRC = ft_printf.c
SRCOBJ=$(SRC:.c=.o)
CC = "cc"
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCOBJ)
	ar -rcs $(NAME) $^

clean: 
	/bin/rm -f $(SRCOBJ) libftprintf.h.gch

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all comp $(NAME) clean fclean re bonus bon