# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/07 14:35:58 by mmacdona          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2017/09/09 17:25:14 by mmacdona         ###   ########.fr        #
=======
#    Updated: 2017/09/11 16:45:45 by mmacdona         ###   ########.fr        #
>>>>>>> my_temp
#                                                                              #
# **************************************************************************** #

NAME = minishell
<<<<<<< HEAD
SRC = main.c ft_shio.c shexecute.c minishell.c
OBJ = main.o ft_shio.o shexecute.o minishell.o
=======
SRC = main.c minishell.c ft_sherrors.c ft_shfuncs.c ft_shexec.c ft_shinput.c 
OBJ = main.o minishell.o ft_sherrors.o ft_shfuncs.o ft_shexec.o ft_shinput.o
>>>>>>> my_temp
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
