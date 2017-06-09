/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 13:40:59 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/09 15:04:01 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t i;
	int result;

	result = 0;
	if(str != NULL)
	{
		i = 0;
		if (str[i] == '-')
			i++;
		while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		{
			result += str[i] - '0';
			result *= 10;
			i++;
		}
		result /= 10;
		if (str[0] == '0')
			result *= -1;
	}
	return (result);
}
