# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/23 16:09:49 by mmacdona          #+#    #+#              #
#    Updated: 2017/06/03 14:13:03 by mmacdona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = gcc -Wall -Werror -Wextra
SOURCES = ft_memalloc.c
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
