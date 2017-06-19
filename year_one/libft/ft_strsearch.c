#include "libft.h"

size_t		ft_strsearch(const char *str, char c)
{
	size_t i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	if (str[i] == c)
		return (i);
	return (0);
}
