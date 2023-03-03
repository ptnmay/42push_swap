# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 05:21:17 by psaeyang          #+#    #+#              #
#    Updated: 2023/03/03 17:06:35 by psaeyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Werror -Wextra
HEADER = push_swap.h
RM = rm -rf
LIBFT_PATH = libft/
LIBFT_A = libft/libft.a

SRCS = main.c set_stack.c do_error.c do_error2.c insert_index.c zou_sort.c \
		sort_function.c zou_sort_100.c looking_for_sth.c zou_sort100_back2a.c

OBJ = $(SRCS:.c=.o)
all: $(NAME)

$(LIBFT_A) :
			$(MAKE) -C $(LIBFT_PATH)
$(NAME) : $(LIBFT_A) $(OBJ)
		$(CC) $(OBJ) $(LIBFT_A) -o $(NAME) 

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make -C $(LIBFT_PATH) clean
	@$(RM) $(OBJ)

fclean: clean
	@make -C $(LIBFT_PATH) fclean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

