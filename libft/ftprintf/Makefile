#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 11:59:23 by araveala          #+#    #+#              #
#    Updated: 2024/04/19 18:32:57 by araveala         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CFILES = ft_printchar.c ft_printstr.c ft_printnum.c\
ft_printhex.c ft_printf.c ft_printhex_ptr.c ft_print_unsigned_num.c

OFILES = $(CFILES:.c=.o)

cc = cc
CFLAGS = -Wall -Wextra -Werror
NAME = ftprintf.a
HEADER = ft_printf.h
AR =  ar -rcs
RM = rm -f

.c.o:
	@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OFILES) $(HEADER)
	@$(AR) $(NAME) $(OFILES)

clean:
	@$(RM) $(OFILES)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re