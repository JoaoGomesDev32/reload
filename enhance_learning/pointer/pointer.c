#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	*valor1, valor2 = 50;
	char	*letra1, letra2 = 'g';

	valor1 = &valor2;
	letra1 = &letra2;

	printf("Valor da variável valor2: %d\n", valor2);
	printf("Endereço da variável valor2: %p\n", &valor2);
	printf("Conteúdo da variável valor1: %p\n", valor1);
	printf("Conteúdo apontado pela variável valor1: %d\n", *valor1);

	printf("\nValor da variável letra2: %c\n", letra2);
	printf("Endereço da variável letra2: %p\n", &letra2);
	printf("Conteúdo da variável letra1: %p\n", letra1);
	printf("Conteúdo apontado pela variável letra1: %c\n", *letra1);
	return (0);
}
