#include "get_next_line.h"
#include "libft.h"

int		get_next_line(const in fd, char **line)
{
	static s_list HEAD;
	char buff[BUFF_SIZE];
	int count;

	while (ft_strsearch(buff, '/n') == 0)
	{
		read(buff);
		count += ft_strlen(buff);
		ft_lstadd(&HEAD, ft_lstnew((void *)buff, ft_strlen(buff)));
		ft_strclr(buff);
	}
	//TODO Fix for when buff includes \n and code make_line function; Include lseek functionality; Include EOF stopper;
	line = make_line();
	reset_read;
	return (list);
}
