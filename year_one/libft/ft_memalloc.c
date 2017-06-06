/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:16:18 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/06 11:52:04 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *temp;

	temp = (void *)malloc(sizeof(void) * size);
	if (temp == NULL)
	{
		free(temp);
		temp = NULL;
	}
	return (temp);
}
