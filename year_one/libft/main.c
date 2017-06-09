/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:19:34 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/09 11:58:43 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int i = 0;
	char *src, *dst;
	src = (char*)malloc(sizeof(char)*5);
	src[0] = 'h';
	src[1] = 'e';
	src[2] = 'l';
	src[3] = 'l';
	src[4] = 'o';
	//dst = (char*)malloc(sizeof(char) * 4);
	dst = &src[1];
	ft_putstr(dst);
	ft_putchar('\n');
	ft_putstr(memmove(dst, src, 1));
	ft_putchar('\n');
	ft_putstr(src);
	ft_putchar('\n');
	ft_putstr(dst);
	return (0);
}
