/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 15:11:59 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/27 16:19:09 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int 	main(int argc, char **argv)
{
	//char *s = "      split       this for   me  !       ";
	char **str;
	char *s = "      split       this for   me  !       ";
	int i = 0;

	if (argc > 1)
		str = ft_strsplit(argv[1], ' ');
	else
		str = ft_strsplit(s, ' ');
	if (!str)
		printf("!str\n");
	else
		printf("str\n");
	
	if (str != NULL)
	{
		while (i < atoi(argv[2]))
		{
			printf("** %s **\n", str[i]);
			i++;
		}
	}
}
