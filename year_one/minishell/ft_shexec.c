/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shexec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 15:11:34 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/11 16:42:39 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void		ft_exec_sh(func_ptr_t *func_ptr, char *user_input)
{
	if (func_ptr != NULL && user_input != NULL)
		ft_printf("<- Func %s called! ->", func_ptr->
}

func_ptr_t	*ft_get_funcs()
{
	func_ptr_t	*func_arr;

	func_arr = (func_ptr_t *)malloc(sizeof(func_ptr_t) * 1);
	func_arr[0] = &ft_shls;
	return (func_arr);
}

char		**ft_get_cmnds()
{
	char	**cmnds;

	cmnds = (char **)malloc(sizeof(char *) * 1);
	cmnds[0] = ft_strnew(2);
	ft_strcpy(cmnds[0], "ls");
	return (cmnds);
}
