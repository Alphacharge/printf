NAME	:=	libftprintf.a

###			###			COMPABILITY		###			###
OS		:=	$(shell uname)

###			###			COMPILER		###			###
CC		:=	cc
CFLAGS	:=	-Wall -Wextra -Werror
CFLAGS	+=	-g 
CFLAGS	+=	-fsanitize=address

###			###			SOURCES			###			###
VPATH	:=	./

SRC_F	:=	ft_printf.c
SRC_F	+=	ft_putstr.c

###			###			OBJECTS			###			###
OBJ_D	:=	./obj
OBJ_F	:=	$(patsubst %.c,$(OBJ_D)/%.o,$(SRC_F))
DEP_F	:=	$(patsubst %.c,$(OBJ_D)/%.d,$(SRC_F))

###			###			COLORS			###			###
RED		:=	\033[1;31m
GREEN	:=	\033[1;32m
YELL	:=	\033[1;33m
BLUE	:=	\033[1;34m
WHITE	:=	\033[0m

###			###			LIBRARIES		###			###
LIBFT_D	:=	./libft
LIBFT_F	:=	$(LIBFT_D)/libft.a
LIBFT_U	:=	https://www.github.com/Alphacharge/mylibft

LIB		:=	-L $(LIBFT_D) -l ft

###			###			HEADER			###			###
INC_D	:=	./inc
INC_F	:=	-I $(INC_D) -I $(LIBFT_D)

###			###			COMPABILITY		###			###

###			###			RULES			###			###
all: $(OBJ_D) $(LIBFT_F)
	@$(MAKE) -j $(NAME)

$(NAME): $(OBJ_F)
	@ar -rcs $(NAME) $^
	@echo "$(RED)--->$(BLUE)Printf is compiled.$(WHITE)"

$(OBJ_D)/%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_D):
	@mkdir -p $@

$(LIBFT_F):
ifneq ($(shell test -d $(LIBFT_D) && echo exists), exists)
	@echo "$(GREEN)Clone libft ...$(WHITE)"
	@git clone -q --branch v1.0.3 --recurse-submodules $(LIBFT_U) $(LIBFT_D)
endif
	@$(MAKE) -j -C $(LIBFT_D)
	

clean:
	@rm -rf $(OBJ_D)
	@make fclean -C $(LIBFT_D)

fclean: clean
	@rm -f $(NAME)
	@echo "$(BLUE)--->$(GREEN)Cleaning $(NAME) .....$(WHITE)"
	@echo "$(RED)All is cleaned$(WHITE)"

re: fclean all

bonus: all

.PHONY: all fclean clean re bonus
