/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:48:26 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/28 17:43:13 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_flist		*ft_flist(void)
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
