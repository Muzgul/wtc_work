/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_io.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:57:34 by mmacdona          #+#    #+#             */
/*   Updated: 2017/08/10 17:41:42 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUFF_SIZE 32

char	*get_line(const int fd)
{
	char	buff[BUFF_SIZE];
	char	*str;
	t_list	*head;
	t_list	*lst_ptr;

	read(fd, buff, BUFF_SIZE);
	while (ft_strsearch(&buff, '\n') != 0 && ft_strsearch(&buff, -1) != 0)
	{
		lst_ptr = ft_lst_item((void*)buff, ft_strlen(&buff));
		if (head != NULL)
			lst_ptr->next = head->next;
		head = lst_ptr;
		read(fd, buff, BUFF_SIZE);
	}
	lst_ptr = ft_lst_item((void*)buff, ft_strlen(&buff));
	if (head != NULL)
		lst_ptr->next = head->next;
	head = lst_ptr;
	str = ft_lst_to_str(head);
	lseek(fd, ft_strlen(str), SEEK_SET);
	return (str);
}
