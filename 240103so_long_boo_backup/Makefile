# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 13:20:26 by brandebr          #+#    #+#              #
#    Updated: 2024/01/02 16:24:03 by brandebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = main.c parse_it.c get_next_line.c ft_read_map.c flood_map.c movements.c\
	  upload_img.c exit.c position.c

LIBS = -L./Libft -lft -L./ft_printf -lftprintf -L./mlx -lmlx -framework OpenGL \
	   -framework AppKit

OBJ = $(SRC:%.c=%.o)

CC = cc

FLAGS = -Wall -Wextra -Werror -g -I. -I./libft -I./ft_printf

LIBFT = ./Libft/libft.a
LIBFT_DIR = ./libft

FT_PRINTF = ./ft_printf/libftprintf.a
FT_PRINTF_DIR = ./ft_printf

MLX = ./mlx/libmlx.a
MLX_DIR = ./mlx

all: Makefile
	$(MAKE) $(NAME)

%.o: %.c so_long.h ./Libft/libft.h ./ft_printf/ft_printf.h Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(LIBFT) $(FT_PRINTF) $(MLX) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) $(LIBS) -o $(NAME)
	#	$(CC) $(FLAGS) $(OBJ) $(LIBFT) $(FT_PRINTF) $(MLX) -o $(NAME)

$(FT_PRINTF):
	@make all -C $(FT_PRINTF_DIR)

$(LIBFT):
	@make bonus -C $(LIBFT_DIR)

$(MLX):
	@make all -C $(MLX_DIR)

clean: 
	/bin/rm -f $(OBJ)
	make clean -C $(LIBFT_DIR)
	make clean -C $(FT_PRINTF_DIR)
	make clean -C $(MLX_DIR)

fclean: clean
	/bin/rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)
	make fclean -C $(FT_PRINTF_DIR)
	make fclean -C $(MLX_DIR)

re: fclean all 

.PHONY: all clean fclean re
