/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 17:11:58 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/20 14:13:21 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include "libft/libft.h"

# define FUNC_COUNT 1
typedef	int (*func_ptr_t)(char *user_input);

//base func definitions

int		ft_shecho(char *user_input);

//Static variable declerations
static char fname_lst[1][4] = {"echo"};
static func_ptr_t fptr_lst[1] = {&ft_shecho};


char	*ft_prompt();
char	*ft_get_line();
int		ft_execute(char *input, char **envp);

#endif
