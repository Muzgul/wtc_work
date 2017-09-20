/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shprompt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:46:16 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/19 15:50:03 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char *ft_prompt()
{
	char *input;

	ft_printf("uoykcuf:> ");
	input = ft_get_line();
	if (input == NULL)
		ft_printf("[ Error reading input! ]\n");
	return (input);
}

//Add get line
char	*ft_get_line()
{
	size_t	str_len;
	char	*str;
	char	c;
	t_list	*head;
	t_list	*lst_ptr;

	str_len = 0;
	head = NULL;
	lst_ptr = NULL;
	str = (char *)malloc(32 * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (read(STDIN_FILENO, &c, 1) > 0)
	{
		if (c == -1 || c == '\n')
			c = '\0';
		if (str_len < 32)
			str[str_len++] = c;
		else
		{
			lst_ptr = ft_lstnew((void*)str, ft_strlen(str));
			if (lst_ptr == NULL)
				return (NULL);
			ft_lstadd(&head, lst_ptr);
			ft_strclr(str);
			str_len = 0;
			str[str_len++] = c;
		}
		if (c == '\0')
		{
			if (str_len > 0)
			{
				lst_ptr = ft_lstnew((void *)str, ft_strlen(str));
				if (lst_ptr == NULL)
					return (NULL);
				ft_lstadd(&head, lst_ptr);
			}
			return (ft_lst_to_str(head));
		}
	}
	if (str_len > 0)
	{
		lst_ptr = ft_lstnew((void *)str, ft_strlen(str));
		if (lst_ptr == NULL)
			return (NULL);
		ft_lstadd(&head, lst_ptr);
	}
	if (head != NULL)
		return (ft_lst_to_str(head));
	return (NULL);
}

