#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	i;
	int	num2[10];

	for(i = 0; i < 10; i++)
	{
		printf("Digite o elemento da posição %d: ", i);
		scanf("%d", &num2[i]);
	}

	printf("\n\n");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", num2[i]);
	}
	printf("\n\n");

	/*
	int	i;
	int	num2[] = {1,5,9,15,43};
	char	vogais[5] = {'a','e','i','o','u'};
	float	notas[3] = {7.5,8.3,9.5};

	for(i = 0; i < 5; i++)
	{
		printf("%d ", num2[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("%c ", vogais[i]);
	}
	printf("\n");
	for(i = 0; i < 3; i++)
	{
		printf("%.2f ", notas[i]);
	}

	int	idade;
	char	sexo;
	float	n1;

	int	num1[10];
	int	num2[] = {1,5,9,15,43};
	int	num3[5] = {4,7,5}; //preenche o restante do tamanho com 0,0
	int	num4[5] = {1,2,3,4,5,6}; //o ultimo indice do vetor sera perdido!
	int	num5[5] = {0}; // vetor de zeros

	char	letras[100];
	char	vogais[5] = {'a','e','i','o','u'};

	float	notas[3] = {7.5,8.3,9.5};
	*/
	return (0);
}