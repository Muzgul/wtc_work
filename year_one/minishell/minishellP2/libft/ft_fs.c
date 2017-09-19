/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:44:33 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/05 14:58:31 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_s(va_list args)
{
	ft_putstr(va_arg(args, char *));
}

void	ft_d(va_list args)
{
	ft_putstr(ft_itoa(va_arg(args, int)));
}
