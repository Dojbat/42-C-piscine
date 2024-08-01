# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 12:05:34 by ththanas          #+#    #+#              #
#    Updated: 2024/08/01 11:55:28 by ththanas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_DIR = srcs
OBJ_DIR = objs
INC_DIR = includes
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS = $(SRC_FILES:.c=.o)
OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(OBJS))

# Rules
all: $(NAME)

$(NAME): $(OBJ_FILES)
	@echo "Compiling $(NAME)"
	ar rc $(NAME) $(OBJ_FILES)
	ranlib $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	@echo "Cleaning object files"
	rm -f $(OBJ_FILES)
	rm -rf $(OBJ_DIR)

fclean: clean
	@echo "Cleaning all"
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
