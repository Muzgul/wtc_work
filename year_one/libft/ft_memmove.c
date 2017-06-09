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

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;
	char c;

	if (dst != NULL && src != NULL)
	{
		i = 0;
		while (dst[i] && src[i])
		{
			c = (char)src[i];
			dst[i] = (void)c;
			i++;
		}
	}
	return (dst);
}
