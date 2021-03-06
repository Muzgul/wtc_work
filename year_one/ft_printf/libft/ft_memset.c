/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 13:08:07 by mmacdona          #+#    #+#             */
/*   Updated: 2017/08/01 16:23:00 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char *p;

	if (len > 0)
	{
		p = b;
		while (len > 0)
		{
			*p = c;
			p++;
			len--;
		}
	}
	return (b);
}
