/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 15:17:21 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/20 17:38:07 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int		word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) == c && *(s + i) != '\0')
		i++;
	i = 0;
	while (*(s + i) != c && *(s + i) != '\0')
		i++;
	return (i);
}

char	*get_next(const char *s, char c)
{
	size_t	i;

	i = 0;
	if (s == NULL || s[0] == '\0')
		return (NULL);
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
	while (s != NULL && get_next(s, c) != NULL)
	{
		if (s == NULL)
			return (i);
		if (word_len(s, c) == (int)ft_strlen(s))
		{
			if (ft_strlen(s) > 0)
				return (i + 1);
			else
				return (i);
		}
		s += word_len(s, c);
		s = get_next(s, c);
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
	str = (char**)malloc(sizeof(char*)*i + 1);
	j = 0;
	while (j < i)
	{
		temp = get_next(s, c);
		if (temp == NULL)
			return (NULL);
		str[j] = ft_strnew(word_len(temp, c));
		ft_strncpy(str[j], temp, word_len(temp, c));
		while (s[0] == c && s[0] != '\0')
			s++;
		s += word_len(temp, c);
		j++;
	}
	str[j] = NULL;
	return (str);
}
