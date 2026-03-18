#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));

int	is_empty(char *str)
{
	if (str[0] == '\0')
		return (1);
	return (0);
}

int	main(void)
{
	char	*tab[] = {"ola", "", "42", "", 0};
	int	result = ft_count_if(tab, &is_empty);

	printf("%d\n", result);
	return (0);
}
