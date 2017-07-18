
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>


size_t	ft_strlcat(char *restrict s1, const char *restrict s2, size_t size);

int main(int argc, char **argv)
{
	char s1[4] = "";
	char s2[4] = "";
	int r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
	int r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
	printf("r1 %s\n", s1);
	printf("r2 %s\n", s2);
	printf("%i\n", r1);
	printf("%i\n", r2);
	return (0);		
}
