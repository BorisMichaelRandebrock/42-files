# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 12:42:23 by brandebr          #+#    #+#              #
#    Updated: 2023/11/03 10:40:28 by brandebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c utils.c stack_init.c utilities.c fst_moves.c push_n_swap.c\
      rotates.c magic.c get_radixal.c magic_continues.c ra_rotates.c

OBJ = $(SRC:%.c=%.o)

CC = cc

FLAGS = -Wall -Werror -Wextra -g -I. -I./libft -I./ft_printf

LIBFT = ./libft/libft.a
LIBFT_DIR = ./libft

FT_PRINTF = ./ft_printf/libftprintf.a
FT_PRINTF_DIR = ./ft_printf

all: $(NAME) Makefile

%.o: %.c push_swap.h ./libft/libft.h Makefile
	$(CC)  $(FLAGS) -c $< -o $@ #-fsanitize=address

$(NAME): $(OBJ) $(LIBFT) $(FT_PRINTF)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) $(FT_PRINTF) -o $(NAME) #-fsanitize=address

$(FT_PRINTF):
	@make all -C $(FT_PRINTF_DIR)

$(LIBFT): 
	@make bonus -C $(LIBFT_DIR)
	
me_watch:
	$(CC) -g3 $(FLAGS) $(LIBFT) $(FT_PRINTF) *.c -o debug
	@lldb ./debug 1 24 3  

clean:
	/bin/rm -f *.o
	make clean -C $(LIBFT_DIR) 

fclean: clean
	/bin/rm -f $(OBJ) $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
