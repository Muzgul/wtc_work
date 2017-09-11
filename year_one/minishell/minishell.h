/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 14:40:47 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/11 16:45:13 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include "libft/libft.h"

typedef	(*func_ptr_t)(char *user_input);

func_ptr_t	ft_input_error(char *user_input);
void		ft_exec_sh(func_ptr_t *func_ptr, char *user_input);
func_ptr_t	*ft_get_funcs();
char		**ft_get_cmns();
int			ft_get_status(char *user_input);
void		ft_get_input(char **old_input);
// Cmnd functions
void		ft_shls(char *user_input);


#endif
