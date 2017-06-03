/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 11:18:14 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/03 14:03:25 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)	(char))
{
	int		i;
	char	*str;

	str = NULL;
	if (f != NULL && s != NULL)
	{
		str = ft_strnew(ft_strlen(s));
		if (str == NULL)
		{
			i = 0;
			while (s[i] != '\0')
			{
				str[i] = (*f)(s[i]);
				i++;
			}
		}
	}
	return (str);
}
