/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 13:36:01 by mmacdona          #+#    #+#             */
/*   Updated: 2017/07/25 14:11:28 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1[0] == '\0' && s1[0] == s2[0])
		return (0);
	if (s1[0] == '\0' && s1[0] != s2[0])
		return (-1);
	if (s2[0] == '\0' && s2[0] != s1[0])
		return (1);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
