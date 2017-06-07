/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:19:34 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/07 15:30:15 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int i = 0;
	char *src = "hello", *dst;

	dst = (char*)malloc(sizeof(char) * 4);
	ft_putstr(dst);
	ft_putstr(memcpy(dst, src, 3));
	ft_putchar('\n');
	ft_putstr(src);
	ft_putchar('\n');
	ft_putstr(dst);
	return (0);
}
