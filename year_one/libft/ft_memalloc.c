/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:16:18 by mmacdona          #+#    #+#             */
/*   Updated: 2017/05/30 11:49:59 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
