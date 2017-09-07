/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 13:26:37 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/07 17:15:30 by mmacdona         ###   ########.fr       */
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
			if (head != NULL)
				return (ft_lst_to_str(head));
			else
				return (str);
		}
	}
	if (head != NULL)
		return (ft_lst_to_str(head));
	return ("FAIL\n");
}

int		ft_set_status(char *str)
{
	if (ft_strcmp(str, "exit\n") == 0)
		return (1);
	return (0);
}

void	ft_io_loop()
{
	int		status;
	char	*line;
	/*char	*cmnd;
	char	*args;
	char	*flags;
*/
	status = 0;
	while (status == 0)
	{
		ft_printf("(=_=)> ");
		line = ft_get_line();
		status = ft_set_status(line);
		/*cmnd = ft_get_cmnd(line);
		flags = ft_get_flags(line);
		args = ft_get_args(line);
		ft_execute(cmnd, flags, args);
		free(cmnd);
		free(flags);
		free(args);
		free(line);*/
		ft_printf("%s\n", line);
	}
}
