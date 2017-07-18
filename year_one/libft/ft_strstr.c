/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 13:23:25 by mmacdona          #+#    #+#             */
/*   Updated: 2017/07/04 12:14:32 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t i;
	size_t x;

	i = 0;
	x = 0;
	if (big[i] != '\0')
	{
		if (little[x] == '\0')
			return ((char*)big);
		while (big[i] != '\0')
		{
			while (big[i + x] == little[x])
				x++;
			if (little[x] == '\0' && x > 0)
				return ((char*)&big[i]);
			else
				x = 0;
			i++;
		}
	}
	return (NULL);
}
