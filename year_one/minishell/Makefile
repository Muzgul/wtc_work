# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/07 14:35:58 by mmacdona          #+#    #+#              #
#    Updated: 2017/09/07 14:40:32 by mmacdona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell
SRC = main.c minishell.c
OBJ = main.o minishell.o
FLAGS = gcc -Wall -Werror -Wextra

$(OBJ): $(SRC)
	$(FLAGS) -c $(SRC)

all: $(OBJ)
	$(MAKE) -C libft all
	$(FLAGS) $(OBJ) -L libft -lft -o $(NAME)

clean:
	$(MAKE) -C libft clean
	/bin/rm -f $(OBJ)

fclean: clean
	$(MAKE) -C libft fclean
	/bin/rm -f $(NAME)
