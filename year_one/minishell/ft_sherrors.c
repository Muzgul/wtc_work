/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sherrors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:49:24 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/12 16:52:58 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

func_ptr_t	ft_input_error(char *user_input)
{
	func_ptr_t	*func_arr;
	char		**cmnd_arr;
	char		**split_input;
	int			i;
	int			j;

	if (user_input == NULL)
		return (NULL);
	split_input = ft_strsplit(user_input, ' ');
	func_arr = ft_get_funcs();
	cmnd_arr = ft_get_cmnds();
	i = 0;
	while (split_input[i] != NULL)
	{
		if (i == 0)
		{
			j = 0;
			while (cmnd_arr[j] != NULL && ft_strcmp(cmnd_arr[j], split_input[i]) != 0)
				j++;
			if (cmnd_arr[j] != NULL && ft_strcmp(cmnd_arr[j], split_input[i]) == 0)
				return (func_arr[j]);
			else
			{
				ft_printf("[ Command %s not found! ]\n", split_input[i]);
				return (NULL);
			}
		}
		i++;
		//TODO
		//-> check function flags
		//---> if flags exist
		//---> in the right pos
		//---> allign with cmnd
		//-> check directories
	}
	return (NULL);
}
