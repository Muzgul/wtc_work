/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 12:42:32 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/05 17:23:57 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		ft_printdir(char *str)
{
	DIR		*dir_stream;
	struct dirent *dir_ptr;
	dir_stream = opendir(str);
	if (dir_stream != NULL)
	{
		dir_ptr = readdir(dir_stream);
		while (dir_ptr != NULL)
		{
			if (dir_ptr->d_type == DT_REG)
				ft_printf("%s\t\t", dir_ptr->d_name);
			dir_ptr = readdir(dir_stream);
		}
		closedir(dir_stream);
	}
	else
		return (1);
	return (0);
}

int		ft_printarg(char **args)
{
	if (args != NULL)
		return (1);
	return (0);
}

int		ft_ls(char **args)
{
	if (args[1] == NULL)
		ft_printdir(".");
	else
		ft_printarg(args);
	
	return (0);
}
