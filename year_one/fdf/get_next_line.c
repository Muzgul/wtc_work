/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 14:40:59 by mmacdona          #+#    #+#             */
/*   Updated: 2017/07/01 15:12:35 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#incude "libft/libft.h"

int		get_next_line(const int fd, char **line)
{
	char buffer[32];
	char *temp;
	int size;

	read(fd, buffer, 32);
	while (ft_strsearch(buffer, -1) == 0)
	{
		if (ft_strsearch(buffer, '\n') != 0)
			//cpy buffer to temp + count
		else
			//cpy from position of '\n'
		//cat temp to line + count
	}
	//contains eof
	//cpy to temp untill eof + count
	//cat temp to line
}
