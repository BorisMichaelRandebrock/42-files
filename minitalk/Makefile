# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/29 12:21:11 by brandebr          #+#    #+#              #
#    Updated: 2023/07/29 16:15:52 by brandebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk.a

RED = \033[91m
YELLOW = \033[93m
WHITE = \033[97m
GREEN = \033[92m
DEF_CL = \033[m
RESET  = \e[0m
CYAN = \033[96m

COMPILER = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

NORM = norminette -R CheckForbiddenSourceHeader

CLIENT = client
SERVER =server

LIBFT =	./libft/libft.a
LIBFT_DIR = ./libft

FT_PRINTF = ./ft_printf/libftprintf.a
FT_PRINTF_DIR =	./ft_printf

SRC_C =	client.c
SRC_S =	server.c
INC = -I. -I$(LIBFT_DIR) -I$(LIBFT_DIR)/stack -I$(LIBFT_DIR)/GNL -I$(FT_PRINTF_DIR)

_SUCCESS = $(GREEN)Success 🎉
_INFO =	$(YELLOW)INFO 📜
_READY = $(GREEN)ready 🎬
_REMOVED = $(YELLOW)removed 🗑

all: $(SERVER) $(CLIENT)


$(NAME) : all

$(SERVER): $(LIBFT) $(FT_PRINTF)
	@ $(CC) $(FLAGS) $(SRC_S) $(LIBFT) $(FT_PRINTF) $(INC) -o $(SERVER)
	@echo "$(_SUCCESS) server $(_READY)"

$(CLIENT): $(LIBFT) $(FT_PRINTF)
	@ $(CC) $(FLAGS) $(SRC_C) $(LIBFT) $(FT_PRINTF) $(INC) -o $(CLIENT)
	@echo "$(_SUCCESS) client $(_READY)"

$(LIBFT):
	@ $(MAKE) -C $(LIBFT_DIR)

$(FT_PRINTF):
	@ $(MAKE) -C $(FT_PRINTF_DIR)

me_watch:
	$(CC) -g3 $(FLAGS) *.c -o debug
	@./debug

clean:
	@ $(RM) $(CLIENT) $(SERVER)
	@echo "$(YELLOW) client cleaned $(DEF_CL)"
	@echo "$(YELLOW) server cleaned $(DEF_CL)"

fclean:
	@ $(MAKE) fclean -C $(LIBFT_DIR)
	@ $(MAKE) fclean -C $(FT_PRINTF_DIR)
	@ $(RM) $(CLIENT) $(SERVER)
	@echo "$(_INFO) client $(_REMOVED)\n"
	@echo "$(_INFO) server $(_REMOVED)\n"

re: fclean all

mandatory:	$(CLIENT) $(SERVER)

m : mandatory

.PHONY: all clean fclean re mandatory m bonus b $(NAME) $(LIBFT) $(FT_PRINTF)
