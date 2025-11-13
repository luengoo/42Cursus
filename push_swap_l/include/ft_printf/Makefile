# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/29 19:20:37 by alluengo          #+#    #+#              #
#    Updated: 2025/11/13 16:17:38 by alluengo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = ft_printf.c \
	ft_printf_utils.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "printf created"
	@ranlib $(NAME)
	@echo "printf indexed"

%.o: %.c
	@cc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "printf deleted"

re: fclean $(NAME)

.PHONY: all, clean, fclean, re
