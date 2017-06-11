/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 15:33:10 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/09 10:52:38 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t i;
	unsigned char *pd;
	const unsigned char *ps;

	pd = (unsigned char*)dst;
	ps = (const unsigned char*)src;
	i = 0;
	while (i < n)
	{
		*(pd + i) = *(ps + i);
		if (*(ps + i) == (unsigned char)c)
			if (*(pd + i + 1))
				return ((pd + i + 1));
		i++;
	}
	return (NULL);
}
