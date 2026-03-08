/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 09:11:49 by joaog             #+#    #+#             */
/*   Updated: 2026/03/08 09:25:01 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[1] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("abc", "abc"));
// 	printf("%d\n", ft_strcmp("abc", "abd"));
// 	printf("%d\n", ft_strcmp("abe", "abd"));
// 	return (0);
// }