/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 13:26:37 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/09 17:27:00 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_io_loop()
{
	int		status;
	char	*line;
	char	**split_line;

	status = 0;
	while (status == 0)
	{
		ft_printf("(=_=)> ");
		line = ft_get_line();
		status = ft_set_status(line);
		split_line = ft_strsplit(line);
		ft_shexecute(split_line);
		ft_printf("%s\n", line);
	}
}
