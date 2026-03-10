/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 20:41:38 by joaog             #+#    #+#             */
/*   Updated: 2026/03/10 20:42:38 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	array = (int *)malloc(sizeof(int) * size);
	if (!array)
		return (0);
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

// #include <stdio.h>

// int main()
// {
// 	int *arr;
// 	int i;

// 	arr = ft_range(3, 7);

// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// }