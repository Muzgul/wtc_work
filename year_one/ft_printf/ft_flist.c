/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:48:26 by mmacdona          #+#    #+#             */
/*   Updated: 2017/08/24 15:26:50 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flist		*ft_flist()
{
	t_flist *head;
	t_flist *ptr;

	ptr = (t_flist *)malloc(sizeof(t_flist));
	ptr->f = &ft_s;
	ptr->c = 's';
	ptr->next = NULL;
	head = ptr;
	return (head);
}
