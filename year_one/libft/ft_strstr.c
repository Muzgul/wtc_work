/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 13:23:25 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/10 15:58:01 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t i;
	size_t x;

	if (big != NULL && little != NULL)
	{
		i = 0;
		x = 0;
		while (big[i] != '\0')
		{
			if (big[i] == little[x])
				x++;
			else
				x = 0;
			if (little[x] == '\0')
				return ((char*)&big[i]);
			i++;
		}
	}
	return (NULL);
}
