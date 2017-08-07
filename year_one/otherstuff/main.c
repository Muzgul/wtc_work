
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	**ft_strsplit(const char *s, char c);
int main(int argc, char **argv)
{
	char	**str;
	char *temp = "hello my name is murray macdonald";
	str = ft_strsplit(temp, ' ');
	int i = 0;
	printf("%s\n", str[0]);
	return (0);		
}
