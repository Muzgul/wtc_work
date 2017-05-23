/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:19:34 by mmacdona          #+#    #+#             */
/*   Updated: 2017/05/23 18:10:28 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_memdel(void **ap);
void	*ft_memalloc(size_t size);

int		count(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	argc = 1;
	int i = 0;
	char *temp;

	temp = ft_memalloc(count(argv[1]));
	if (temp == NULL)
		return (0);
	while (argv[1][i])
	{
		temp[i] = argv[1][i];
		i++;
	}
	printf("%s", temp);
	ft_memdel((void**)&temp);
	printf("%s", temp);
	return (0);
}
