/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 12:34:14 by mmacdona          #+#    #+#             */
/*   Updated: 2017/05/12 13:11:02 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_count(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_string(char *s1, char *s2)
{
	int i;
	int size;
	char *temp;

	i = 0;
	size = ft_count(s1) + ft_count(s2);
	temp = (char *)malloc(sizeof(char)*size);
	while (i < size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}

int		ft_exists(char *str, char c)
{
	int i;

	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	char *temp;
	char *ptr;
	int i;

	i = 0;
	argc = 0;
	temp = (char *)malloc(sizeof(char)*(ft_count(argv[1]) + ft_count(argv[2])));
	temp = ft_string(argv[1], argv[2]);
	ptr = &argv[1][0];
	while (*ptr != '\0')
	{
		if (ft_exists(temp, *ptr) == 1)
		{
			temp[i] = *ptr;
			ft_putchar(temp[i]);
			i++;
		}
		ptr++;
		if (*ptr == '\0' && argc == 0)
		{
			ptr = &argv[2][0];
			argc++;
		}
	}
	return (0);
}

