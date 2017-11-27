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

#include <stdio.h>

#include "get_next_line.h"

int		line_end(t_list **head)
{
	//printf("line_end\n");

	if (*head == NULL)
		return (0);
	if (ft_strsearch((*head)->content, '\n') != 0 ||
		ft_strsearch((*head)->content, -1) != 0)
		return (1);
	return (0);
}

void	read_to_list(const int fd, t_list **head)
{
	//printf("read_to_list\n");
	char		buff[BUFF_SIZE];
	static char	*temp = NULL;
	t_list		*new;

	if (temp != NULL)
	{
		ft_strcpy((char *)&buff, temp);
		free(temp);
		temp = NULL;

	}
	else
		read(fd, buff, BUFF_SIZE);
	if (ft_strsearch((char *)buff, '\n') != 0)
	{
		new = ft_lstnew((void*)buff, ft_strsearch(buff, '\n') + 1);
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
	//printf("count_size\n");
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
	//printf("make_line\n");
	t_list	*current;
	char 	*tempStr;
	size_t	tempInt;

	*line = ft_strnew(count_size(head));
	current = *head;
	while (current != NULL)
	{
		if ((tempInt = ft_strsearch(current->content, '\n')) != 0)
		{
			tempStr = ft_strnew(tempInt);
			tempStr = ft_strncpy(tempStr, current->content, tempInt);
		}
		else
			tempStr = current->content;
		*line = ft_strjoin(tempStr, *line);
		current = current->next;
	}
}

int		get_next_line(const int fd, char **line)
{
	//printf("get_next_line\n");
	t_list *head;

	head = NULL;
	if (line_end(&head) == 0)
	{
		read_to_list(fd, &head);
	}
	if (count_size(&head) == 0)
		return (0);
	make_line(line, &head);
	return (1);
}
