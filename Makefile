# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: madams <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/05 13:52:54 by madams            #+#    #+#              #
#    Updated: 2019/07/15 10:31:11 by madams           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, $(NAME), clean, fclean, re

NAME = FDF

NOC=\033[0m
OKC=\033[32m
ERC=\033[31m
WAC=\033[33m

cc = gcc
C_FLAGS = -Wall -Wextra -Werror -g
FRAM = -L minilibx -I minilibx -lmlx -framework OpenGL -framework AppKit -g
# FRAM = -framework OpenGL -framework AppKit minilibx_macros/libmlx.a

OBJ_PATH = ./obj/
LFT_PATH = ./libs/libft/
INC_PATH = ./includes/
SRC_PATH = ./srcs/

OBJ_NAME = $(SRC_NAME:.c=.o)
INC_NAME = fdf.h colors.h key_codes.h errors.h
SRC_NAME = color_unit.c init.c mouse_controls.c colors.c controls.c converter.c draw.c keys.c main.c map_reader.c menu.c project.c stack_reader.c utility.c utility2.c

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
INC = $(addprefix -I,$(INC_PATH))

all: $(NAME)

$(NAME): $(OBJ)
		@echo
		@make -C $(LFT_PATH)
		@$(CC) -o $(NAME) $(FRAM) -L $(LFT_PATH) -lft $^ -o $@ 
		@echo "$(OKC)FDF:\t\tµarchall FDF is READY$(NOC)"
		@echo "-----> µarchall™"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
		@mkdir -p $(OBJ_PATH) 2> /dev/null || true
		@$(CC) $(C_FLAGS) $(INC) -o $@ -c $<
		@echo -n =

clean:
		@make -C $(LFT_PATH) clean
		@rm -rf $(OBJ_PATH)
		@echo "$(WAC)FDF:\t\tRemoving OBJ path: ./obj/$(NOC)"

fclean: clean
		@make -C $(LFT_PATH) fclean
		@rm -f $(NAME)
		@echo "$(WAC)FDF:\t\tRemoving fdf executables$(NOC)"

re: fclean all
