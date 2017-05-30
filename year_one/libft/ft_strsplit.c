/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 15:17:21 by mmacdona          #+#    #+#             */
/*   Updated: 2017/05/30 11:48:09 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_strsplit(char const *s, char c)
{
	char	**ac;
	size_t	i;
	size_t	x;
	size_t	d;

	if (s != NULL)
	{
		i = 0;
		d = 0;
		ac = (char **)malloc(sizeof(char *) * ft_words(s, c));
		while (s[i] != '\0')
		{
			if (s[i] != '*')
			{
				x = i;
				while (s[i] != '*' && s[i] != '\0')
					i++;
				ac[d] = ft_strsub(s, x, i - x);
				d++;	
			}
			else
				i++;
		}
	}else
		ac = NULL;
	return (ac);
}
