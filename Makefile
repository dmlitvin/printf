# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmlitvin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/29 18:37:16 by dmlitvin          #+#    #+#              #
#    Updated: 2018/12/07 19:05:49 by dmlitvin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

CC=gcc

FLAGS=-c -Wall -Wextra -Werror

COMPRESS=ar rc

SRC=ft_printf.c ft_itoa_printf.c parsers.c print_numeric.c print_cs.c \
print_float.c \

LIBSRC=libft/ft_strnew.c libft/ft_strcat.c libft/ft_strlen.c libft/ft_memset.c \
libft/ft_strdup.c libft/ft_atoi.c libft/ft_strncat.c libft/ft_isdigit.c \
libft/ft_is_whitespace.c libft/ft_itoa10.c libft/ft_bzero.c libft/ft_strchr.c \
libft/ft_memalloc.c \

DEL=rm -rf

SRO=$(SRC:.c=.o) ft_strnew.o ft_strcat.o ft_strlen.o ft_memset.o ft_strdup.o \
ft_atoi.o ft_strncat.o ft_isdigit.o ft_is_whitespace.o ft_itoa10.o \
ft_bzero.o ft_strchr.o ft_memalloc.o \

all: $(NAME) ft_printf.h

$(NAME):
	@$(CC) $(FLAGS) $(SRC) $(LIBSRC)
	@$(COMPRESS) $(NAME) $(SRO)

clean:
	@$(DEL) $(SRO)
	@make clean -C libft/

fclean: clean
	@$(DEL) $(NAME)
	@make fclean -C libft/

re: fclean all

.PHONY: all clean fclean re
