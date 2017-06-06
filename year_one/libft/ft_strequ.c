/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 13:10:21 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/06 13:37:23 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		while (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
		if ((s1[i] == '\0' && s2[i] != '\0') ||
			(s1[i] != '\0' && s2[i] == '\0'))
			return (0);
	}
	if (s1 == NULL && s2 == NULL)
		return (1);
	else
		return (0);
	return (1);
}
