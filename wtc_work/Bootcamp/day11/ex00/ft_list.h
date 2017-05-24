/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:22:06 by mmacdona          #+#    #+#             */
/*   Updated: 2017/05/10 16:55:34 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# define NULL (void*) 0
typedef struct	s_list
{
	void 		*data;
	t_list 		*next;
}				t_list;

t_list			*ft_create_elem(void *data);

#endif
