/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 14:40:47 by mmacdona          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/09/09 17:13:38 by mmacdona         ###   ########.fr       */
=======
/*   Updated: 2017/09/11 16:45:13 by mmacdona         ###   ########.fr       */
>>>>>>> my_temp
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include "libft/libft.h"

<<<<<<< HEAD
typedef	int	(*func_ptr_t)(char **str);

void	ft_io_loop();
char	*ft_get_line();
int		ft_set_status(char *str);
void	ft_shexecute(char **str);
int		ft_sh_ls(char **str);
=======
typedef	(*func_ptr_t)(char *user_input);

func_ptr_t	ft_input_error(char *user_input);
void		ft_exec_sh(func_ptr_t *func_ptr, char *user_input);
func_ptr_t	*ft_get_funcs();
char		**ft_get_cmns();
int			ft_get_status(char *user_input);
void		ft_get_input(char **old_input);
// Cmnd functions
void		ft_shls(char *user_input);

>>>>>>> my_temp

#endif
