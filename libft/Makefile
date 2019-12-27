#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esnowpea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 12:48:11 by esnowpea          #+#    #+#              #
#    Updated: 2019/09/16 19:18:42 by esnowpea         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC_NAME =	ft_atoi.c \
			ft_error.c \
			ft_count_words.c \
			ft_bzero.c \
			ft_del.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_lstadd.c \
			ft_lstadd_back.c \
			ft_lstdel.c \
			ft_lstdel_pos.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = ./src/

OBJ = ./obj/

HEAD = ./inc/

all: $(NAME)

$(NAME): $(addprefix $(OBJ), $(OBJ_NAME))
	@ar rc $@ $^
	@ranlib $@
	@echo "\033[0;32mlibft library created.\033[0m"

$(OBJ)%.o: $(SRC)%.c
	@$(CC) $(CFLAGS) -I $(HEAD) -o $@ -c $<

clean:
	@rm -rf $(addprefix $(OBJ), $(OBJ_NAME))

fclean: clean
	@rm -f $(NAME)

re: fclean all
