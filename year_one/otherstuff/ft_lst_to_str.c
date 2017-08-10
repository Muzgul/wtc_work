/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:41:44 by mmacdona          #+#    #+#             */
/*   Updated: 2017/08/10 18:04:59 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		lst_str_len(t_list *begin_lst)
{
	t_list	*ptr;
	int count;

	count = 0;
	ptr = begin_lst;
	while (ptr != NULL)
	{
		count += ptr->content_size;
		ptr = ptr->next;
	}
	return (count);
}

char	*ft_lst_to_str(t_list *begin_lst)
{
	int		i;
	t_list	*ptr;
	char	*str;

	str = ft_strnew(lst_str_len(begin_lst));
	if (str == NULL)
		return (NULL);
	ptr = begin_lst;
	while (ptr != NULL)
	{
		ft_strcat(str, (char*)ptr->content);
		ptr = ptr->next;
	}
	return (str);
}
