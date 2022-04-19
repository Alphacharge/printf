# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 13:46:08 by rbetz             #+#    #+#              #
#    Updated: 2022/04/19 12:40:07 by rbetz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libftprintf.a"
SRC = ft_printf.c
SRCOBJ=$(SRC:.c=.o)
CC = "cc"
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCOBJ)
	make bonus -C ./libft/
	ar -rcs $(NAME) $^ libft/*.o

clean:
	make clean -C ./libft/
	/bin/rm -f $(SRCOBJ) libftprintf.h.gch

fclean: clean
	make fclean -C ./libft/
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all comp $(NAME) clean fclean re bonus bon