/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 15:38:19 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/09 12:04:41 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *pd;
	const unsigned char *ps;

	if (dst != NULL && src != NULL)
	{
		pd = (unsigned char*)dst;
		ps = (const unsigned char*)src;
		i = 0;
		while (i < len)
		{
			*(pd + i) = *(ps + i);
			i++;
		}
	}
	return (dst);
}
