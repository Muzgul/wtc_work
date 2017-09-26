/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_direct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 15:16:31 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/26 17:11:54 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*ft_finddir(char *filename, char **envp)
{
	DIR*			dir;
	struct dirent	*cur_dir;
	size_t			i;
	char			*str_ptr;
	char			**split_str;

	i = 0;
	dir = NULL;
	str_ptr = NULL;
	while (envp[i] != NULL)
	{
		if (ft_strncmp(envp[i], "PATH", 4) == 0)
			str_ptr = envp[i];
		i++;
	}
	if (str_ptr == NULL)
	{
		ft_printf("[ Error finding path! ]\n");
		return (NULL);
	}
	split_str = ft_strsplit(str_ptr, '=');
	if (split_str != NULL && split_str[1] != NULL)
	{
		str_ptr = split_str[1];
		split_str = ft_strsplit(str_ptr, ':');
		if (split_str != NULL)
		{
			i = 0;
			while (split_str[i] != NULL)
			{
				cur_dir = NULL;
				dir = opendir(split_str[i]);
				while ((cur_dir = readdir(dir)))
				{
					if (ft_strcmp(cur_dir->d_name, filename) == 0)
					{
						closedir(dir);
						return (split_str[i]);
					}
				}
				i++;
			}
		}
	}
	if (dir != NULL)
		closedir(dir);
	return (NULL);
}
