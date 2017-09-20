/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shexec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:50:12 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/19 15:56:36 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		ft_execute(char *input, char **envp)
{
	int i;

	if (ft_strcmp(input, "exit\n") == 0)
		return (EXIT_FAILURE);
	i = 0;
	while (i < FUNC_COUNT)
	{
		if (ft_strcmp(input, fname_lst[i]) == 0)
			return (fptr_lst[i])(input);
		i++;
	}
	if (*envp != NULL)
		ft_printf("[ Environ received: %s ]\n", envp[0]);
	//Else run the execve command
	return (EXIT_SUCCESS);
}
