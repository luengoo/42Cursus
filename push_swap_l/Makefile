# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 16:11:45 by alluengo          #+#    #+#              #
#    Updated: 2025/11/13 16:15:31 by alluengo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra -g3
NAME = push_swap
SRCLIBFT = ./include/libft
LIBFT = $(SRCLIBFT)/libft.a
SRCPRINTF = ./include/ft_printf
FT_PRINTF = $(SRCPRINTF)/libftprintf.a
SRC = main.c
OBJ_URL = ./obj
OBJ = $(SRC:%.c=$(OBJ_URL)/%.o)
INCLUDE = -I$(SRCLIBFT) -I$(SRCPRINTF)
RM = rm -rf

all: $(LIBFT) $(FT_PRINTF) $(NAME)
	@echo "Push_swap ready."

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -L $(SRCLIBFT) -lft -L $(SRCPRINTF) -lftprintf -o $(NAME)
	@echo "Finish $(NAME)"

$(LIBFT):
	@$(MAKE) -C $(SRCLIBFT)

$(FT_PRINTF):
	@$(MAKE) -C $(SRCPRINTF)

$(OBJ_URL):
	@mkdir -p $(OBJ_URL)

$(OBJ_URL)/%.o: %.c | $(OBJ_URL)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@$(MAKE) -C $(SRCLIBFT) clean
	@$(MAKE) -C $(SRCPRINTF) clean
	@$(RM) $(OBJ_URL)
	@echo "Objects deleted."

fclean: clean
	@$(MAKE) -C $(SRCLIBFT) fclean
	@$(MAKE) -C $(SRCPRINTF) fclean
	@$(RM) $(NAME)
	@echo "Program deleted."

re: fclean all
	@echo "Re Program."

.PHONY: all clean fclean e
