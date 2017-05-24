# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/10 19:21:11 by mmacdona          #+#    #+#              #
#    Updated: 2017/05/10 19:43:05 by mmacdona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra
MAIN = ft_display_file
OBJS = ft_display_file.o
SRCS = ft_display_file.c

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)

$(MAIN): $(OBJS)
	$(CC) $(FLAGS) -o $(MAIN) $(OBJS)

all: $(MAIN)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(MAIN)

