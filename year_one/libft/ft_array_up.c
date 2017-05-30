/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 17:37:22 by mmacdona          #+#    #+#             */
/*   Updated: 2017/05/30 11:48:18 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_array_up(void *ap, size_t size, size_t n)
{
	size_t	i;
	void	*new;

	if (ap != NULL && n > 0)
	{
		new = ft_memalloc(size + n);
		i = 0;
		while (i < size)
		{
			new[i] = ap[i];
			i++;
		}
		ft_memdel(&ap);
	}
	else
		return (ap);
	return (new);
}
