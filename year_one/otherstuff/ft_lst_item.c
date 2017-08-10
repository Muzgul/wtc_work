/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_item.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:26:44 by mmacdona          #+#    #+#             */
/*   Updated: 2017/08/10 18:03:59 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_list	*ft_lst_item(void *data, size_t size)
{
	t_list	*ptr;

	ptr = (t_list*)malloc(sizeof(t_list));
	if (ptr != NULL)
	{
		ptr->content = data;
		ptr->content_size = size;
		ptr->next = NULL;
	}
	else
		return (NULL);
	return (ptr);
}
