/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 13:21:58 by mmacdona          #+#    #+#             */
/*   Updated: 2017/07/17 17:45:05 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	if (s[0] == '\0')
		return (NULL);
	i = ft_strlen(s) - 1;
	if (i == 0)
		return ((char *)s);
	if (c == '\0')
	{
		while (s[i + 1] == '\0')
			i++;
		return ((char*)&s[i]);
	}
	while (i != 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return ((char*)&s[i]);
	return (NULL);
}
