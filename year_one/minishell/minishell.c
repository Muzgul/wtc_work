/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 13:26:37 by mmacdona          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/09/09 17:27:00 by mmacdona         ###   ########.fr       */
=======
/*   Updated: 2017/09/11 16:45:19 by mmacdona         ###   ########.fr       */
>>>>>>> my_temp
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

<<<<<<< HEAD
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
=======
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
>>>>>>> my_temp
	}
}
