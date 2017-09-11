/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 13:26:37 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/11 16:45:19 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_minishell()
{
	int			status;
	func_ptr_t	*func_ptr;
	char	*user_input;

	user_input = NULL;
	while ((status = ft_set_status(user_input)) == EXIT_SUCCESS)
	{
		func_ptr = ft_input_error(user_input);
		if (func_ptr != NULL)
			ft_exec_sh(func_ptr, user_input);
		ft_get_input(&user_input);
	}
}
