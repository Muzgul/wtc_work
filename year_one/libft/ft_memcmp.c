/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 12:10:57 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/09 12:23:32 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		while (i < n)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}
