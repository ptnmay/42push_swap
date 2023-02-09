# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 05:21:17 by psaeyang          #+#    #+#              #
#    Updated: 2023/02/09 16:59:09 by psaeyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Werror -Wextra
HEADER = push_swap.h
RM = rm
LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a

SRCS = main.c do_error.c set_stack.c
OBJ = $(SRC:.c=.o)
all: $(NAME)

$(NAME) : $(LIBFT) $(OBJ)
		$(CC) $(OBJ) $(LIBFT) -o $(NAME)
$(LIBFT) :
			make -C $(LIBFT_PATH)

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make -C $(LIBFT_PATH) clean
	@make -C $(MLX_PATH) clean
	@$(RM) $(OBJ)

fclean: clean
	@make -C $(LIBFT_PATH) fclean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

