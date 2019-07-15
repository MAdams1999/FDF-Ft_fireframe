# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: madams <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/24 11:54:02 by madams            #+#    #+#              #
#    Updated: 2019/07/12 14:23:08 by madams           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

NOC=\033[0m
OKC=\033[32m
ERC=\033[31m
WAC=\033[33m

SRC = ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memccpy.c\
	ft_memmove.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strlen.c\
	ft_strdup.c\
	ft_strcpy.c\
	ft_strncpy.c\
	ft_strcat.c\
	ft_strncat.c\
	ft_strlcat.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strstr.c\
	ft_strnstr.c\
	ft_strcmp.c\
	ft_strncmp.c\
	ft_atoi.c\
	ft_iswhitespace.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_memalloc.c\
	ft_memdel.c\
	ft_strnew.c\
	ft_strdel.c\
	ft_strclr.c\
	ft_striter.c\
	ft_striteri.c\
	ft_strmap.c\
	ft_strmapi.c\
	ft_strequ.c\
	ft_strnequ.c\
	ft_strsub.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_strsplit.c\
	ft_itoa.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putendl.c\
	ft_putnbr.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_lstnew.c\
	ft_lstdelone.c\
	ft_lstdel.c\
	ft_lstadd.c\
	ft_lstiter.c\
	ft_lstmap.c\
	ft_strhextoi.c\
	ft_wordcount.c\
	get_next_line.c\
	ft_program_name.c\
	ft_puterror.c\
	ft_remove_extension.c\
	ft_isspace.c\
		
OBJ = $(SRC:.c=.o)

SRCDIR = srcs

OBJDIR = objs

SRCS = $(addprefix $(SRCDIR)/, $(SRC))

OBJS = $(addprefix $(OBJDIR)/, $(OBJ))

HEADER = -I includes

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

.SUFFIXES: .c .o

all: $(NAME)

$(OBJS): $(SRCS)
	/bin/mkdir -p $(OBJDIR) ;
	$(CC) $(CFLAGS) $(SRCS) $(HEADER) ;
	/bin/mv $(OBJ) $(OBJDIR)/

$(NAME): $(OBJS)
	ar rcs $@ $^
	ranlib $@
	@echo "$(OKC)LIBFT;\t\madams libft is ready$(NOC)"
	@echo "===================="

clean:
	/bin/rm -rf $(OBJDIR)
	@echo "$(WAC)LIBFT:\t\tRemoving OBJ path$(NOC)"
	@echo "===================="

fclean: clean
	/bin/rm -f $(NAME)
	@echo "$(WAC)LIBFT:\t\tRemoving libft executable$(NOC)"
	@echo "===================="

re: fclean all

.PHONY: clean fclean re
