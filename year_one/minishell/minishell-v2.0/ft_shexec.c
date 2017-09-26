/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shexec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:50:12 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/26 17:14:37 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		ft_execute(char *input, char **envp)
{
	char 	**split_input;
	int 	i;

	if (ft_strcmp(input, "exit\n") == 0)
	{	
		ft_printf("[ Process terminated! ]\n");
		return (EXIT_FAILURE);
	}
	i = 0;
	split_input = ft_strsplit(input, ' ');
	if (split_input == NULL)
    {
        if (ft_strlen(input) > 1)
            ft_printf("[ Command not found! ]\n");
        return (EXIT_SUCCESS);
    }
    while (i < FUNC_COUNT)
	{
		if (ft_strcmp(split_input[0], fname_lst[i]) == 0)
			return (fptr_lst[i])(input);
		i++;
	}
    return (ft_execve(split_input, envp));
}

int		ft_execve(char **split_input, char **envp)
{
	pid_t   pid;
    char    *str;
    char    *str_ptr;

    if (!(str_ptr = ft_finddir(split_input[0], envp)))
	{
		ft_printf("[ Unknown command: %s ]\n", split_input[0]);
		return (EXIT_SUCCESS);
	}
	str_ptr = ft_strjoin(str_ptr, "/");
    str = ft_strjoin(str_ptr, split_input[0]);
    free(split_input[0]);
	split_input[0] = str;
	pid = fork();
	if (pid == 0)
	{
        if (execve(split_input[0], split_input, envp) == -1)
			ft_printf("[ Unknown command: %s ]\n");//, str_ptr);
        //free(str_ptr);
        exit(0);
    }
	if (pid > 0)
    {
		wait(NULL);
	}
	return (EXIT_SUCCESS);
}
