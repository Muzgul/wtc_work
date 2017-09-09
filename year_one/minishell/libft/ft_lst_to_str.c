/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:41:44 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/09 13:54:43 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		lst_str_len(t_list *begin_lst)
{
	int count;

	count = 0;
	while (begin_lst != NULL)
	{
		count += begin_lst->content_size;
		begin_lst = begin_lst->next;
	}
	return (count);
}

char	*ft_lst_to_str(t_list *begin_lst)
{
	int		count;
	char	*str;
	char	*tmp_str;
	size_t	i;
	size_t	j;
	t_list	*ptr;

	if (begin_lst == NULL)
		return (NULL);
	count = lst_str_len(begin_lst);
	str = ft_strnew(count);
	ptr = begin_lst;
	i = 0;
	j = 0;
	while (ptr != NULL)
	{
		tmp_str = (char *)ptr->content;
	while (i < ptr->content_size)
		{
			str[j] = tmp_str[i];
			i++;
			j++;
		}
		if (ptr->next == NULL)
			return (str);
		ptr = ptr->next;
		i = 0;
	}
	return (str);
}
