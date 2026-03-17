#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	ft_putchar(n + '0');
}

void	ft_foreach(int *tab, int length, void (*f)(int));

int	main(void)
{
	int	tab[3];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;

	ft_foreach(tab, 3, &ft_putnbr);
	return(0);
}