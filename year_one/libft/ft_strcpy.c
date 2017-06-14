/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 12:49:15 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/09 13:03:21 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t i;
	size_t d;
	size_t s;

	dst = NULL;
	i = 0;
	d = ft_arrlen((void*)dst);
	s = ft_arrlen((void*)s); 
	while (i < d)
	{
		if (i < s)
			dst[i] = src[i];
		else
			dst[i] = '\0';
		i++;
	}
	return (dst);
}
