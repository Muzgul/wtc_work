
#include "get_next_line.h"
#include "libft.h"

int		get_next_line(const in fd, char **line)
{
	static list HEAD;
	char buff[BUFF_SIZE];
	int count;
	while (list_contains('/n') == 0)
	{
		read(buff);
		count += count_chars(buff);
		list_add(buff);
		clear(buff);
	}
	line = make_line();
	reset_read;
	return (list);
}
