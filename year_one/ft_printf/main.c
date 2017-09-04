/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 14:11:19 by mmacdona          #+#    #+#             */
/*   Updated: 2017/08/24 15:23:50 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_printf(const char * restrict format, ...);

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_printf(argv[1], argv[2]);
		printf("\n");
		printf(argv[1], argv[2]);
	}
}
