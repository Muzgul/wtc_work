# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/11 17:11:31 by mmacdona          #+#    #+#              #
#    Updated: 2017/09/20 16:09:53 by mmacdona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell
SRC = main.c ft_shfuncs.c ft_shexec.c ft_shprompt.c 
OBJ = main.o ft_shfuncs.o ft_shexec.o ft_shprompt.o
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
