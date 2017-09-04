/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:44:33 by mmacdona          #+#    #+#             */
/*   Updated: 2017/08/29 13:13:29 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_s(va_list args)
{
	ft_putstr(va_arg(args, char *));
}

void	ft_d(va_list args)
{
	ft_putstr(ft_itoa(va_arg(args, int)));
}
