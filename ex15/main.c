#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str);

int	main(void)
{
	ft_putstr("S2 João & Denize S2");
	return (0);
}