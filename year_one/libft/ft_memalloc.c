/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:16:18 by mmacdona          #+#    #+#             */
/*   Updated: 2017/05/23 18:16:17 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

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
