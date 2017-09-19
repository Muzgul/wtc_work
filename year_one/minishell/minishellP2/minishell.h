/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 17:11:58 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/19 16:03:53 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include "libft/libft.h"

typedef	int (*func_ptr_t)(char *user_input);
static char fname_lst[1][4] = {"ls");
static func_ptr_t fptr_lst[1] = {&ft_shls};


char	*ft_prompt();
char	*ft_get_line();
int		ft_execute(char *input, char **envp);
// Cmnd functions
void	ft_shls(char *user_input);

#endif
