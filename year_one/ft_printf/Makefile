# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/22 13:21:58 by mmacdona          #+#    #+#              #
#    Updated: 2017/08/22 13:38:40 by mmacdona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SOURCES = main.c ft_printf.c
OBJECTS = main.o ft_printf.o
FLAGS = gcc -Wall -Werror -Wextra

$(OBJECTS): $(SOURCES)
	$(FLAGS) -c $(SOURCES)

all:$(OBJECTS)
	$(MAKE) -C libft all
	$(FLAGS) $(OBJECTS) -L libft -lft

clean:
	$(MAKE) -C libft clean
	/bin/rm -f $(OBJECTS)

fclean: clean
	$(MAKE) -C libft fclean
	/bin/rm -f $(NAME)
