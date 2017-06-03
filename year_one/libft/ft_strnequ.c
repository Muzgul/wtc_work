/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 14:05:29 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/03 14:08:11 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		while (s1[i] != '\0' && s2[i] != '\0' && i < n)
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
		if ((s[i] == '\0' && s2[i] != '\0') ||
			(s1[i] != '\0' && s2[i] == '\0'))
			return (0);
	}
	if (s1 == NULL && s2 == NULL)
		return (1);
	else
		return (0);
	return (1);
}
