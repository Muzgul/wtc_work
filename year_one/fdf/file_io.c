/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_io.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:57:34 by mmacdona          #+#    #+#             */
/*   Updated: 2017/08/11 16:00:20 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUFF_SIZE 32
#include "fdf.h"

char	*get_line(const int fd)
{
	char	buff[BUFF_SIZE];
	char	*str;
	t_list	*head;
	t_list	*lst_ptr;

	read(fd, buff, BUFF_SIZE);
	while (ft_strsearch((const char *)&buff, '\n') != 0 && ft_strsearch((const char *)&buff, -1) != 0)
	{
		lst_ptr = ft_lst_item((void*)buff, ft_strlen((const char *)&buff));
		if (head != NULL)
			lst_ptr->next = head->next;
		head = lst_ptr;
		read(fd, buff, BUFF_SIZE);
	}
	lst_ptr = ft_lst_item((void*)buff, ft_strlen((const char *)&buff));
	if (head != NULL)
		lst_ptr->next = head->next;
	head = lst_ptr;
	str = ft_lst_to_str(head);
	lseek(fd, ft_strlen(str), SEEK_SET);
	return (str);
}
