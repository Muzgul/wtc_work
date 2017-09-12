/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 13:26:37 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/12 16:58:49 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*ft_get_line()
{
	size_t	str_len;
	char	*str;
	char	c;
	t_list	*head;
	t_list	*lst_ptr;

	str_len = 0;
	head = NULL;
	str = (char *)malloc(32 * sizeof(char));
	while (read(STDIN_FILENO, &c, 1) > 0)
	{
		if (c == -1 || c == '\n')
			c = '\0';
		if (str_len < 32)
			str[str_len++] = c;
		else
		{
			lst_ptr = ft_lstnew((void*)str, 32);
			if (lst_ptr != NULL)
				ft_lstadd(&head, lst_ptr);
			ft_strclr(str);
			str_len = 0;
			str[str_len++] = c;
		}
		if (c == '\0')
		{
			if (str_len > 0)
				ft_lstadd(&head, ft_lstnew((void*)str, 32));
			return (ft_lst_to_str(head));
		}
	}
	if (head != NULL)
		return (ft_lst_to_str(head));
	return ("FAIL\n");
}

int		ft_get_status(char *user_input)
{
	int i;

	i = 0;
	if (user_input != NULL && ft_strcmp(user_input, "exit\n") == 0)
	{
		ft_printf("[ Process Terminated! ]\n");
		return (EXIT_FAILURE);
	}
	ft_printf("(=_=)> ");
	return (EXIT_SUCCESS);
}

char	*ft_get_input(char *old_input)
{
	if (old_input != NULL)
	{
		free(old_input);
		old_input = NULL;
	}
	old_input = ft_get_line();
	if (old_input == NULL)
	{
		ft_printf("[ Error reading input! ]\n");
		return (NULL);
	}
	return (old_input);
}