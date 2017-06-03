/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 13:53:20 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/03 14:08:36 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s)
{
	int		i;
	int		j;
	char	*str;

	if (s != NULL)
	{
		str = ft_strnew(ft_strlen(s) - ft_strspaces(s));
		if (str != NULL)
		{
			i = 0;
			j = 0;
			while (s[i] != '\0')
			{
				if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
				{
					str[j] = s[i];
					j++;
				}
				i++;
			}
		}
	}
	return (str);
}
