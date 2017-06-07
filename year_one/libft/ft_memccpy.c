/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 15:33:10 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/07 15:37:57 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] && dst[i])
	{
		dst[i] = src[i];
		if (src[i] == c)
			if (dst[i + 1])
				return (&dst[i + 1])
		i++;
	}
	return (NULL);
}
