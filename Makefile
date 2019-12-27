# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esnowpea <esnowpea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/02 13:56:52 by esnowpea          #+#    #+#              #
#    Updated: 2019/12/27 17:57:41 by esnowpea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LDFLAGS = -L./libft

LDHEAD = ./libft/inc/

LDLIBS = -lft

SRC_NAME = main.c \
		   get_next_line.c

OBJ = ./obj/

SRC = ./src/

OBJ_NAME = $(SRC_NAME:.c=.o)

HEAD = ./inc/

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(addprefix $(OBJ), $(OBJ_NAME))
	@make -C ./libft
	@$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) $^ -o $@
	@echo "\033[0;32mprogramm get next line created.\033[0m"

$(OBJ)%.o: $(SRC)%.c
	@$(CC) $(CFLAGS) -I $(HEAD) -I $(LDHEAD) -o $@ -c $<

clean:
	@rm -rf $(addprefix $(OBJ), $(OBJ_NAME))
	@make -C ./libft clean

fclean: clean
	@rm -rf $(NAME)
	@make -C ./libft fclean

re: fclean all
