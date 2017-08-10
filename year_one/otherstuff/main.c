/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:55:11 by mmacdona          #+#    #+#             */
/*   Updated: 2017/08/10 18:06:53 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

t_list	*ft_lst_item(void	*data, size_t size);
char	*ft_lst_to_str(t_list *begin_lst);

int		main(int argc, char **argv)
{
	t_list *head;
	t_list *lst_ptr;
	int i = 1;
	while (i < argc)
	{
		lst_ptr = ft_lst_item(argv[i], ft_strlen(argv[i]));
		if (head != NULL)
			lst_ptr->next = head->next;
		head = lst_ptr;
	}
	lst_ptr = head;
	while (lst_ptr != NULL)
	{
		printf("%s\n", (char*)lst_ptr->content);
		lst_ptr = lst_ptr->next;
	}
	return (0);
}
