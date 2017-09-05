/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 12:33:39 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/05 15:21:16 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H
# include <string.h>
# include <dirent.h>
# include "libft/libft.h"

int		ft_ls(char **args);
int		ft_printfdir(char *str);
int		ft_printfarg(char **args);

#endif
