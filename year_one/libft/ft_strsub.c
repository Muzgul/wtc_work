/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 13:15:49 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/06 13:27:37 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	str = NULL;
	if (s != NULL && s[start] && s[start + len - 1])
	{
		str = ft_strnew(len);
		if (str != NULL)
		{
			i = 0;
			while (i < len)
			{
				str[i] = s[i + start];
				i++;
			}
			if (ft_strequ(s, str) == 0)
				str = NULL;
		}
	}
	return (str);
}
