#include <stdio.h>
#include <stdlib.h>

void	imprimirVetor(int *v, int tam)
{
	int	i;
	for (i = 0; i < tam; i++)
	{
		printf("%d ", *(v + i));
	}
	printf("\n");
}

void	imprimirVetorLetras(char *v, int tam)
{
	int	i;
	for (i = 0; i < tam; i++)
	{
		printf("%c ", *(v + i));
	}
	printf("\n");
}

void preencherVetorInt(int *v, int tam)
{
	int	i;
	for (i = 0; i < tam; i++)
	{
		printf("Digite um valor qualquer: ");
		scanf("%d", v + i);
	}
}

int	main(void)
{
	int	i, vet[10] = {0,2,4,6,8,10,12,14,16,18};
	char	letras[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

	// printf("%p\t%p\n", vet, &vet[0]);

	preencherVetorInt(vet, 10);
	imprimirVetor(vet, 10);
	imprimirVetorLetras(letras, 10);

/*
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(vet + i));
	}
*/
	/*
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
	*/

	return (0);
}
