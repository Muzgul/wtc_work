#include "get_next_line.h"
#include "libft.h"

int		line_end()
{
	if (ft_strsearch(HEAD->content, '\n') != 0 || ft_strsearch(HEAD->content, -1) != 0)
		return (1);
	return (0);
}

void	read_to_list(const int fd)
{
	char buff[BUFF_SIZE];
	t_list *new;

	read(fd, buff, BUFF_SIZE);
	if (ft_strsearch(buff, '\n') != 0)
		new = ft_lstnew((void*)buff, ft_strsearch(buff, '\n'));
	else
	{
		if (ft_strsearch(buff, -1) != 0)
			new = ft_lstnew((void*)buff, ft_strsearch(buff, -1));
		else
			new = ft_lstnew((void*)buff, ft_strlen(buff)));
	}
	count += new->content_size;
	ft_lstadd(&HEAD, new);
}

void	make_line(char **line)
{
	t_list *current;

	*line = ft_strnew(count);
	current = HEAD;
	while (current != NULL)
	{
		*list = ft_strjoin(current->content, *list);
		current = current->next;
	}
}

int		get_next_line(const int fd, char **line)
{
	static s_list HEAD;
	static size_t count;

	count = 0;
	while (line_end() == 0)
	{
		read_to_list(fd);
	}
	
	make_line();
	lseek(fd, count, SEEK_SET);
	return (list);
}
