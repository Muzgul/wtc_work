/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:39:23 by mmacdona          #+#    #+#             */
/*   Updated: 2017/08/11 15:45:02 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <fcntl.h>
#include <stdio.h>

char	*get_line(const int fd);

int		main()
{
	int fd = open("some.txt", O_RDONLY);
	printf("%s\n", get_line(fd));

	return (0);
}
