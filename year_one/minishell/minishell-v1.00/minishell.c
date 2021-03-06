/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 17:14:15 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/12 17:03:11 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_minishell()
{
	int			status;
	func_ptr_t	func_ptr;
	char	*user_input;

	user_input = NULL;
    func_ptr = NULL;
	status = ft_get_status(user_input);
    while (status == EXIT_SUCCESS)
    {
        if (user_input != NULL)
		    func_ptr = ft_input_error(user_input);
		if (func_ptr != NULL)
			ft_exec_sh(func_ptr, user_input);
		user_input = ft_get_input(user_input);
		status = ft_get_status(user_input);
    }
}
