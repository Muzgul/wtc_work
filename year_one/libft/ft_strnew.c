/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 18:20:27 by mmacdona          #+#    #+#             */
/*   Updated: 2017/05/24 13:26:58 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnew(size_t size)
{
	int		i;
	char	*str;

	size++;
	str = ft_memalloc(size);
	if (str != NULL)
	{
		i = 0;
		while (i < size)
		{
			str[i] = '\0';
			i++;
		}
	}
	return (str);
}
