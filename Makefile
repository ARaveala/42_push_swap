#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 11:57:05 by araveala          #+#    #+#              #
#    Updated: 2024/04/19 09:31:03 by araveala         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

#variables
CFILES = error_check.c initialize.c free_loops.c node_manipulation.c push_swap.c\
check_sorted.c rotate.c swap.c simple_sort.c push.c comparison_utils.c indexing.c algorithm.c rotate_both.c

OFILES = $(CFILES:.c=.o)
LIBFT = libft
#FTPRINTF = ftprintf
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
AR =  ar -rcs
RM = rm -f

#adding colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

INCLUDE = -L ./libft -lft
INCLUDE = -L ./ftprintf -lft

.c.o:
	@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME):  $(OFILES)
	@echo "${MAGENTA}COMPILING ALL${DEF_COLOR}"
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@$(CC) $(CFLAGS) $(OFILES) $(LIBFT)/libft.a -o push_swap

clean:
	@echo "${MAGENTA}CLEANING${DEF_COLOR}"
	@make clean -C $(LIBFT)
	@$(RM) $(OFILES)

fclean:	clean
	@echo "${MAGENTA}F CLEAN ALL${DEF_COLOR}"
	@$(RM) $(LIBFT)/libft.a
	@$(RM) $(LIBFT)/ftprintf/ftprintf.a
	@$(RM) $(NAME)

re: fclean $(NAME)

#.SILENT:

.PHONY: all clean fclean re
