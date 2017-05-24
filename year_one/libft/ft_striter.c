/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 11:11:05 by mmacdona          #+#    #+#             */
/*   Updated: 2017/05/24 11:13:43 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	if (f != NULL && s != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			(*f)(&s[i]);
			i++;
		}
	}
}