/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 13:23:25 by mmacdona          #+#    #+#             */
/*   Updated: 2017/07/01 16:57:49 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t i;
	size_t x;

	i = 0;
	x = 0;
	while (big[i] != '\0')
	{
		if (little[x] == '\0')
			return ((char*)&big[i]);
		if (big[i] == little[x])
			x++;
		else
			x = 0;
		i++;
	}
	if (big[0] == '\0' && big[0] == little[0])
		return ((char*)big);
	return (NULL);
}
