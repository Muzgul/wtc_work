/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 13:15:17 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/28 16:02:27 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict s1, const char *restrict s2, size_t size)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0' && i < size && (i + dst_len) < (size - 1))
	{
		s1[dst_len + i] = s2[i];
		i++;
	}
	if (s2[i] != '\0' && (i + dst_len) == (size - 1))
	{
		if (s2[i + 1] != '\0')
			s1[dst_len + i] = '\0';
		else
			s1[dst_len + i] = s2[i];
		return (size);
	}
	s1[dst_len + i] = '\0';
	if (i > 0 && s2[i] == '\0')
		return (dst_len + ft_strlen(s2));
	return (size + ft_strlen(s2));
}
