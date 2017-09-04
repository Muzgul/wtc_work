/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:53:44 by mmacdona          #+#    #+#             */
/*   Updated: 2017/08/24 15:07:52 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#	define FT_PRINTF_H
#include "libft/libft.h"
#include <stdarg.h>

typedef struct		s_flist
{
	void			(*f)(va_list args);
	char			c;
	struct s_flist	*next;
}					t_flist;

int			ft_printf(const char * restrict format, ...);
t_flist		*ft_flist();
void		ft_s(va_list args);

#endif
