/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 14:40:47 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/09 17:13:38 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include "libft/libft.h"

typedef	int	(*func_ptr_t)(char **str);

void	ft_io_loop();
char	*ft_get_line();
int		ft_set_status(char *str);
void	ft_shexecute(char **str);
int		ft_sh_ls(char **str);

#endif
