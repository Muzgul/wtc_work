/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 11:16:59 by mmacdona          #+#    #+#             */
/*   Updated: 2017/08/01 15:24:59 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define MIN (-2147483648)
#define MAX 2147483647

int		count_num(int n)
{
	int count;

	count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*make_string(int n)
{
	int		count;
	int		i;
	char	*temp;

	i = 0;
	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	count += count_num(n);
	if (n == 0)
	{
		temp = ft_strnew(1);
		temp[0] = '0';
	}
	else
		temp = ft_strnew(count);
	return (temp);
}

char	*min_max_str(int n)
{
	char *str;

	if (n == MAX)
	{
		str = ft_strnew(10);
		str = "2147483647";
		return (str);
	}
	if (n == MIN)
	{
		str = ft_strnew(11);
		str = "-2147483648";
		return (str);
	}
	return (NULL);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;
	int		neg;

	neg = 0;
	if (n < 0)
		neg = 1;
	if (min_max_str(n) != NULL)
		return (min_max_str(n));
	str = make_string(n);
	if (str == NULL)
		return (NULL);
	if (neg == 1)
		n *= -1;
	if (n == 0)
		return (str);
	i = count_num(n) + neg;
	while (i > 0)
	{
		str[i - 1] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
