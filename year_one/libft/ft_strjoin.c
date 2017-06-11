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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		length;
	char	*str;

	str = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		length = ft_strlen(s1) + ft_strlen(s2);
		str = ft_strnew(length);
		if (str != NULL)
		{
			ft_strcpy(str, s1);
			str += ft_strlen(s1);
			ft_strcpy(str, s2);
		}
	}
	return (str);
}
