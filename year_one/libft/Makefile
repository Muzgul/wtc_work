# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/23 16:09:49 by mmacdona          #+#    #+#              #
#    Updated: 2017/06/06 13:36:37 by mmacdona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = gcc -Wall -Werror -Wextra
SOURCES = ft_array_up.c ft_strspaces.c ft_striter.c ft_putchar.c ft_strsplit.c ft_memdel.c ft_strlen.c ft_strmap.c ft_putendl_fd.c ft_memalloc.c ft_strsub.c ft_findnext.c ft_strdel.c ft_putstr_fd.c ft_strnew.c ft_strjoin.c ft_itoa.c ft_strequ.c ft_striteri.c ft_putnbr_fd.c ft_putstr.c ft_strclr.c ft_strmapi.c ft_strtrim.c ft_strnequ.c ft_words.c ft_putnbr.c ft_putchar_fd.c ft_putendl.c
OBJECTS = $(SOURCES:.c=.o)

$(OBJECTS): $(SOURCES)
	$(FLAGS) -c $(SOURCES)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

all: $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
