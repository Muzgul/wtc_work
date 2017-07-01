/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 15:17:47 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/23 12:21:38 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		line_end(t_list **head)
{
	if (ft_strsearch((*head)->content, '\n') != 0 ||
		ft_strsearch((*head)->content, -1) != 0)
		return (1);
	return (0);
}

void	read_to_list(const int fd, t_list **head)
{
	char		buff[BUFF_SIZE];
	t_list		*new;

	read(fd, buff, BUFF_SIZE);
	if (ft_strsearch(buff, '\n') != 0)
	{
		new = ft_lstnew((void*)buff, ft_strsearch(buff, '\n'));
		temp = ft_strnew(BUFF_SIZE - ft_strsearch(buff, '\n'));
		ft_strcpy(temp, &buff[ft_strsearch(buff, '\n') + 1]);
	}
	else
	{
		if (ft_strsearch(buff, -1) != 0)
			new = ft_lstnew((void*)buff, ft_strsearch(buff, -1));
		else
			new = ft_lstnew((void*)buff, ft_strlen(buff));
	}
	ft_lstadd(head, new);
}

int		count_size(t_list **head)
{
	t_list	*current;
	int		count;

	current = *head;
	count = 0;
	while (current != NULL)
	{
		count += current->content_size;
		current = current->next;
	}
	return (count);
}

void	make_line(char **line, t_list **head)
{
	t_list *current;

	*line = ft_strnew(count_size(head));
	current = *head;
	while (current != NULL)
	{
		*line = ft_strjoin(current->content, *line);
		current = current->next;
	}
}

int		get_next_line(const int fd, char **line)
{
	t_list *head;

	head = NULL;
	while (line_end(&head) == 0)
	{
		read_to_list(fd, &head);
	}
	make_line(line, &head);
	return (0);
}
