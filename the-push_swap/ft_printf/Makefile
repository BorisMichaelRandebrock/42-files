# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/21 16:28:59 by brandebr          #+#    #+#              #
#    Updated: 2023/06/27 11:44:57 by brandebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_itoa.c ft_printformat.c ft_putnumber.c\
      ft_itoa.c ft_itoa_u.c ft_puthex.c 

OBJ = $(SRC:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror -I.

all: $(NAME)

%.o: %.c ft_printf.h Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $@ $^ $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	 /bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

