/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 13:34:01 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/06 13:48:41 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		str_copy(char *src, char *dest, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		src[i] = dest[n];
		i++;
		n++;
	}
	return (n);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	int		length;
	char	*str;

	str = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		length = ft_strlen(s1) + ft_strlen(s2);
		str = ft_strnew(length);
		if (str != NULL)
		{
			j = 0;
			j = str_copy((char*)s1, str, j);
			str_copy((char*)s2, str, j);
		}
	}
	return (str);
}
