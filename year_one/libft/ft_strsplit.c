/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 15:17:21 by mmacdona          #+#    #+#             */
/*   Updated: 2017/09/28 17:41:48 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	word_len(const char *s, char c)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (*(s + i) == c && *(s + i) != '\0')
		i++;
	while (*(s + i) != c && *(s + i) != '\0')
	{
		i++;
		x++;
	}
	return (x);
}

static char	*get_next(const char *s, char c)
{
	size_t	i;

	i = 0;
	if (s == NULL || word_len(s, c) == 0)
		return (NULL);
	while (*(s + i) == c && *(s + i) != '\0')
		i++;
	if (*(s + i) == '\0')
		return (NULL);
	return ((char*)(s + i));
}

static int	count_words(const char *s, char c)
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

	if (s == NULL)
		return (NULL);
	while (s[0] == c || s[0] == '\0')
	{
		if (s[0] == '\0')
		{
			str = (char**)malloc(sizeof(char*));
			*str = NULL;	
			return (str);
		}
		s++;
	}
	i = count_words(s, c);
	str = (char**)malloc(sizeof(char*)*i + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	temp = get_next(s, c);
	while (j < i && temp != NULL)
	{
		str[j] = ft_strnew(word_len(temp, c));
		ft_strncpy(str[j], temp, word_len(temp, c));
		temp = get_next(temp, c);
		temp += word_len(temp, c);
		while (temp[0] == c && temp[0] != '\0')
			temp++;
		j++;
	}
	str[j] = NULL;
	return (str);
}
