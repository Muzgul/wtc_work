/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 11:15:55 by mmacdona          #+#    #+#             */
/*   Updated: 2017/05/24 11:18:05 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	if (f != NULL && s != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}