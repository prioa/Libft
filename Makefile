# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 13:29:08 by pdubsky           #+#    #+#              #
#    Updated: 2022/11/05 15:10:16 by pdubsky          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CFLAGS=-Wall -Wextra -Werror
OPTIONS=-c -I.
SRC=ft_is*.c ft_bzero.c ft_striteri.c ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_strrchr.c ft_strmapi.c ft_striteri.c ft_split.c ft_strdup.c ft_strtrim.c ft_calloc.c ft_strnstr.c ft_atoi.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strchr.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memset.c ft_memmove.c ft_strlen.c ft_substr.c ft_to*.c ft_strjoin.c
OBJ=*.o
BONUS=ft_lst*.c

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(OPTIONS) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all	

bonus: $(BONUS)
	$(CC) $(CFLAGS) $(OPTIONS) $(BONUS)
	ar -crs $(NAME) $(OBJ)




so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)