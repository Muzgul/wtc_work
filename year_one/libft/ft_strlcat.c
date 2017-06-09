/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 13:15:17 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/09 13:15:36 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *restrict s1, const char *restrict s2, size_t size)
{
	size_t i;
	size_t x;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		x = 0;
		while (s1[i] != '\0')
			i++;
		while (s2[x] != '\0' && x < size)
		{
			s1[i + x] = s2[x];
			x++;
		}
		s1[i + x] = '\0';
	}
	return (s1);
}
