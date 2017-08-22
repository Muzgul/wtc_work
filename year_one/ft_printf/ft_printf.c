/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 13:45:38 by mmacdona          #+#    #+#             */
/*   Updated: 2017/08/22 16:48:33 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

int		ft_printf(const char * restrict format, ...)
{
	char	*ptr;
	va_list args;
	va_start(args, format);

	ptr = (char *)format;
	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == 's')
				ft_putstr(va_arg(args, char *));
		}
		else
			ft_putchar(*ptr);
		ptr++;
	}
	va_end(args);
	return (0);
}
