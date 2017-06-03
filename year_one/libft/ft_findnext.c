/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findnext.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 14:26:18 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/03 14:35:29 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_findnext(char *str, char c, size_t start)
{
	size_t i;

	i = start + 1;
	while (str[i] && str[i] != '\0' && str[i] != c)
		i++;
	if (str[i] != c)
		return (0);
	return (i - start);
}
