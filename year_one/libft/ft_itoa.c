/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 11:16:59 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/06 13:34:00 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;

	str = NULL;
	if (n < 0)
	{
		str = ft_strnew(2);
		str[0] = '-';
		i = 1;
		n *= -1;
	}
	else
	{
		str = ft_strnew(1);
		i = 0;
	}
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		if (n > 0)
			str = ft_array_up(str, i + 1, 1);
		i++;
	}
	return (str);
}
