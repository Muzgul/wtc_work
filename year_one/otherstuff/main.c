
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>


size_t	ft_strlcat(char *restrict s1, const char *restrict s2, size_t size);

int main(int argc, char **argv)
{
	char *str = " world";
	char a[12] = "hello";
	char b[12] = "hello";

	int i = strlcat(a, str, 1);
	int j = ft_strlcat(b, str, 1);
	
	printf("%s\n", b);
	printf("%i\n", j);
	printf("%s\n", a);
	printf("%i\n", i);
	return (0);		
}
