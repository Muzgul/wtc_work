/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:44:33 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/28 17:50:42 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_s(va_list args)
{
	ft_putstr(va_arg(args, char *));
}

static void	ft_d(va_list args)
{
	ft_putstr(ft_itoa(va_arg(args, int)));
}
