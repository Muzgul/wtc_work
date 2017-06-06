/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:19:34 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/06 14:06:54 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	int		i;
	char	*str;

	str = ft_memalloc(5);
	i = 0;
	while (argv[1][i] != '\0')
	{
		str[i] = argv[1][i];
		i++;
	}
	ft_putstr(str);
	ft_memdel((void**)&str);
	return (0);
}
