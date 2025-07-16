#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 11:59:28 by araveala          #+#    #+#              #
#    Updated: 2024/04/19 18:32:01 by araveala         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_memset.c\
ft_bzero.c  ft_memcpy.c ft_memmove.c ft_memcmp.c ft_memchr.c\
ft_strncmp.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_strmapi.c\
ft_striteri.c ft_atoi.c ft_itoa.c ft_atol.c\
ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c\
ft_calloc.c ft_strdup.c ft_substr.c ft_split.c ft_strtrim.c\
ft_strjoin.c\
ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OFILES = $(CFILES:.c=.o)
FTPRINTF = ftprintf
CC = cc
CFLAGS = -Wextra -Werror -Wall
NAME = libft.a
HEADER = libft.h
AR = ar -rcs 
RM = rm -f

.c.o:
	@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OFILES) $(HEADER)
	@make -C $(FTPRINTF)
	@cp ftprintf/ftprintf.a .
	@mv ftprintf.a $(NAME)
	@$(AR) $(NAME) $(OFILES)
clean:
	@make clean -C $(FTPRINTF)
	@$(RM) $(OFILES)
fclean: clean
	@$(RM) $(FTPRINTF)/ftprintf.a
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
