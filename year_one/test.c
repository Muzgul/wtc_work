/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 15:11:59 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/28 17:29:04 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

static char str[] = "abcdedcba";

int 	main(int argc, char **argv)
{
	//char *str = ft_strnew(10);
	//ft_memset(str, 'a', 10);
	//str[0] = '\0';
	//str[9] = '\0';
	printf("## %s ##\n", str);
	printf("** %s **\n", (strrchr(str, 0)));
	printf("^^ %s ^^\n", (ft_strrchr(str, 0)));
	if (str[9] == '\0')
		printf("IS NULL TERM\n");
	if (strrchr(str, 0) != ft_strrchr(str, 0))
		printf("FAILED!!\n");
}
