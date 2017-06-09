/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 13:33:31 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/09 13:34:23 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t x;

	if (big != NULL && little != NULL)
	{
		i = 0;
		x = 0;
		while (big[i] != '\0' && i < len)
		{
			if (big[i] = little[x])
				x++;
			else
				x = 0;
			if (little[x] = '\0')
				return (&big[i]);
			i++;
		}
	}
	return (NULL);
}
