/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shprompt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:46:16 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/19 15:50:03 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.c"

char *ft_prompt()
{
	char *input;

	ft_printf("uoykcuf:> ");
	input = ft_getline();
	return (input);
}

//Add get line
