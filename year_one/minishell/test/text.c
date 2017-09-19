/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 13:33:38 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/19 14:14:02 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv, char **envp)
{
	char	*str;
	//str = (char *)malloc(sizeof(char) * 64);
	//getcwd(str, 64);
	//str = getenv(".");
	//printf("%s\n", str);
	char **arg;
	arg = (char **)malloc(sizeof(char *) * 2);
	arg[0] = (char *)malloc(sizeof(char) * 7); 
	arg[0] = "/bin/ls";
	arg[1] = NULL;
	execve(arg[0], arg, NULL);
}
