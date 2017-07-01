/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 12:48:04 by mmacdona          #+#    #+#             */
/*   Updated: 2017/07/01 14:29:33 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx_macos/mlx.h"

int		main(int argc, char **argv)
{
	void *ptr, *wind, *pxl;
	ptr = mlx_init();
	if (ptr != (void*)0)
		wind = mlx_new_window(ptr, 100, 100, "Hello World!");
	int i = 1;
	mlx_string_put(ptr, wind, 10, 10, 130, "hello");
	while (i > 0)
		i = 1;
	return (0);
}
