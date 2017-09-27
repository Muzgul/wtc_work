/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 15:17:21 by mmacdona          #+#    #+#             */
/*   Updated: 2017/08/11 14:06:18 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int		word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) != c && *(s + i) != '\0')
		i++;
	return (i);
}

char	*get_next(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) == c && *(s + i) != '\0')
		i++;
	if (*(s + i) == '\0')
		return (NULL);
	return ((char*)(s + i));
}

int		count_words(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (get_next(s, c) != NULL)
	{
		s = get_next(s + word_len(s, c), c);
		i++;
	}
	return (i);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**str;
	char	*temp;
	size_t	i;
	size_t	j;

	i = count_words(s, c);
	if (i == 0)
		return (NULL);
	str = (char**)malloc(sizeof(char*)*i);
	j = 0;
	while (j < i)
	{
		temp = get_next(s, c);
		if (temp == NULL)
			return (NULL);
		str[j] = ft_strnew(word_len(temp, c));
		ft_strcpy(str[j], temp);
		s += word_len(s, c);
		j++;
	}
	return (str);
}
