/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:42:49 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/19 15:45:49 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		main(int argc, char **argv, char **envp)
{
	char	*input;
	int		status;

	input = NULL;
	status = EXIT_SUCCESS;
	while (status)
	{
		input = ft_prompt();
		if (input != NULL)
			status = ft_execute(input, envp);
		free(input);
	}
	return (0);
}
