# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 14:21:20 by rbetz             #+#    #+#              #
#    Updated: 2022/04/13 14:03:44 by rbetz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
		ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c 
BON = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
SRCOBJ=$(SRC:.c=.o)
BONOBJ=$(BON:.c=.o)
CC = "cc"
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCOBJ)
	ar -rcs $(NAME) $^

clean: 
	/bin/rm -f $(SRCOBJ) $(BONOBJ) libft.h.gch

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

bonus:  $(SRCOBJ) $(BONOBJ)
	ar -rcs $(NAME) $(SRCOBJ) $(BONOBJ)

.PHONY: all comp $(NAME) clean fclean re bonus bon