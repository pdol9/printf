# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 15:03:29 by pdolinar          #+#    #+#              #
#    Updated: 2022/02/12 13:37:08 by pdolinar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:			all bonus clean fclean re

NAME	=		./libftprintf.a
HEADER	=		ft_printf.h ./libft/libft.h
LIBFT	=		./libft/libft.a

CC		=		gcc
CFLAGS	=		-Wall -Wextra -Werror
RM		=		rm -f

SRC		=		ft_printf.c \
				ft_print_char.c \
				ft_print_hex.c \
				ft_print_int.c \
				ft_print_ptr.c \

OBJ		=		$(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER) $(LIBFT)
	@$(CC) $(CFLAGS) -c $(SRC)
	@ar rs $(NAME) $(OBJ)
	@echo "\e[1;32m$(NAME) compiled!\e[0m"

$(LIBFT):
	@$(MAKE) -s -C ./libft/
	@cp $(LIBFT) $(NAME)
	@echo "\e[1;36m$(LIBFT) compiled!\e[0m"

clean:
	@$(MAKE) fclean -s -C ./libft/
	@$(RM) $(OBJ)
	@echo "\e[1;35mobject files deleted\e[0m"

fclean:	clean
	@$(RM) $(NAME)
	@echo "\e[1;35mAll compiled files deleted\e[0m"

re:	fclean all
