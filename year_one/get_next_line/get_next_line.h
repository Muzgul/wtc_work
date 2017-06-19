#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE = 32;

typedef struct t_list
{
	t_list *next;
	char	data[BUFF_SIZE];
}
