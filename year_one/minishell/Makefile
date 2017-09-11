# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/11 17:11:31 by mmacdona          #+#    #+#              #
#    Updated: 2017/09/11 17:11:45 by mmacdona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell
SRC = main.c minishell.c ft_sherrors.c ft_shfuncs.c ft_shexec.c ft_shinput.c 
OBJ = main.o minishell.o ft_sherrors.o ft_shfuncs.o ft_shexec.o ft_shinput.o
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
