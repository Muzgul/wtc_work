/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 13:15:17 by mmacdona          #+#    #+#             */
/*   Updated: 2017/07/01 16:11:28 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *restrict s1, const char *restrict s2, size_t size)
{
	size_t i;
	size_t x;

	i = 0;
	x = 0;
	while (s1[i] != '\0' && i < size)
		i++;
	if (size > 0)
	{
		while (s2[x] != '\0' && (x + i) < (size - 1))
		{
			s1[i + x] = s2[x];
			x++;
		}
	}
	if (x > 0)
	{
		while ((i + x) < size - 1)
		{
			s1[i + x] = '\0';
			x++;
		}
	}
	return (s1);
}
