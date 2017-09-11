/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 17:03:42 by mmacdona          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/09/09 13:48:59 by mmacdona         ###   ########.fr       */
=======
/*   Updated: 2017/09/11 14:29:00 by mmacdona         ###   ########.fr       */
>>>>>>> my_temp
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*ptr;

	if (*alst != NULL)
	{
		ptr = *alst;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
	else
		*alst = new;
}
