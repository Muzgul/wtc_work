/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 13:21:58 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/28 17:35:01 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t 	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i != 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return ((char*)&s[i]);
	return (NULL);
}