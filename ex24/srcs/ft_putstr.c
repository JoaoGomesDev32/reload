#include <unistd.h>
#include "libft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		white(1, str[i], 1);
		i++;
	}
}
