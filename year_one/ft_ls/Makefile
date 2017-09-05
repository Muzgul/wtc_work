# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/05 17:28:53 by mmacdona          #+#    #+#              #
#    Updated: 2017/09/05 17:35:24 by mmacdona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls
SRC = main.c ft_ls.c 
OBJ = main.o ft_ls.o
FLG = gcc -Wall -Werror -Wextra

$(OBJ): $(SRC)
	$(FLG) -o $(SRC)

$(NAME): $(OBJ)
	$(MAKE) -C libft all
	$(FLG) $(OBJ) -L libft -lft -o $(NAME)

all: $(NAME)

clean:
	$(MAKE) -C libft clean
	/bin/rm -f $(OBJ)

fclean: clean
	$(MAKE) -C libft fclean
	/bin/rm -f $(NAME)
