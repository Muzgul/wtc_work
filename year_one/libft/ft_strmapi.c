/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 14:05:50 by mmacdona          #+#    #+#             */
/*   Updated: 2017/05/24 14:05:53 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)	(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = NULL;
	if (f != NULL && s != NULL)
	{
		str = ft_strnew(ft_strlen(s));
		if (str == NULL)
		{
			i = 0;
			while (s[i] != '\0')
			{
				str[i] = (*f)(i, s[i]);
				i++;
			}
		}
	}
	return (str);
}
