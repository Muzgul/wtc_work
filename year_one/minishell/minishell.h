/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 17:11:58 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/11 17:29:34 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include "libft/libft.h"

typedef	void (*func_ptr_t)(char *user_input);

void		ft_minishell();
func_ptr_t	ft_input_error(char *user_input);
void		ft_exec_sh(func_ptr_t func_ptr, char *user_input);
func_ptr_t	*ft_get_funcs();
char		**ft_get_cmnds();
int			ft_get_status(char *user_input);
void		ft_get_input(char **old_input);
// Cmnd functions
void		ft_shls(char *user_input);

#endif
