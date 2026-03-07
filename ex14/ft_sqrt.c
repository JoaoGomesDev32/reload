/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 17:56:52 by joaog             #+#    #+#             */
/*   Updated: 2026/03/07 18:08:00 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int ft_sqrt(int nb);

// int main(void)
// {
//     printf("%d\n", ft_sqrt(16));
//     printf("%d\n", ft_sqrt(9));
//     printf("%d\n", ft_sqrt(8));
//     printf("%d\n", ft_sqrt(1));
//     printf("%d\n", ft_sqrt(0));
//     return (0);
// }