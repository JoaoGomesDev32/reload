#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));

int	is_empty(char *str)
{
	if (str[0] == '\0')
		return (1);
	return (0);
}