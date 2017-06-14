
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

size_t ft_arrlen(void *arr);

int main()
{
	char *p;
	*p = 'a';
	printf("%zu", ft_arrlen(p));
	return (0);		
}
