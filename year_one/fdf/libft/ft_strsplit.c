/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 15:17:21 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/06 11:54:25 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**ac;
	size_t	i;
	size_t	d;

	if (s != NULL)
	{
		i = 0;
		d = 0;
		ac = (char **)malloc(sizeof(char *) * ft_words(s, c));
		while (s[i] != '\0')
		{
			if (ft_findnext(s, '*', i) > 1)
			{
				ac[d] = ft_strsub(s, i + 1, ft_findnext(s, '*', i));
				d++;
			}
			i += ft_findnext(s, '*', i);
		}
	}
	else
		ac = NULL;
	return (ac);
}
