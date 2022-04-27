# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 13:46:08 by rbetz             #+#    #+#              #
#    Updated: 2022/04/27 17:22:09 by rbetz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libftprintf.a"
SRC = ft_printf.c ft_printflibft.c ft_printflibftcalloc.c
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

.PHONY: all $(NAME) clean fclean re