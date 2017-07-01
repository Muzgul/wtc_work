/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 15:38:19 by mmacdona          #+#    #+#             */
/*   Updated: 2017/07/01 16:21:55 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char c;
	unsigned char *pd;
	const unsigned char *ps;

	pd = (unsigned char*)dst;
	ps = (const unsigned char*)src;
	i = 0;
	while (i < len)
	{
		c = *(ps + i);
		if (c != *(pd + i))
			if ((pd + i) != (ps + i))
				*(pd + i) = c;
		i++;
	}
	return (dst);
}
