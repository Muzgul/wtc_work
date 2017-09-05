/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 13:45:38 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/05 17:34:46 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Uses ft_fs and ft_flist

int		ft_printf(const char * restrict format, ...)
{
	char	*str_ptr;
	t_flist *head;
	t_flist *lst_ptr;
	va_list args;
	va_start(args, format);

	head = ft_flist();
	str_ptr = (char *)format;
	while (*str_ptr != '\0')
	{
		if (*str_ptr == '%')
		{
			str_ptr++;
			lst_ptr = head;
			while (lst_ptr != NULL)
			{
				if (*str_ptr == lst_ptr->c)
					lst_ptr->f(args);
				lst_ptr = lst_ptr->next;
			}
		}
		else
			if (*str_ptr != '\0')
				ft_putchar(*str_ptr);
		str_ptr++;
	}
	va_end(args);
	return (0);
}
