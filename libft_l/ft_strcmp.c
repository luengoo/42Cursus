/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:19:12 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/07 11:35:22 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main()
{
	char *str1 = "Manzana";
	char *str2 = "Manzana";
	char *str3 = "ManzanA";
	char *str4 = "Manzanas";
	char *str5 = "Manzan";

	printf("Comparando '%s' y '%s' : %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("Comparando '%s' y '%s' : %d\n", str1, str3, ft_strcmp(str1, str3));
	printf("Comparando '%s' y '%s' : %d\n", str3, str1, ft_strcmp(str3, str1));
	printf("Comparando '%s' y '%s' : %d\n", str1, str4, ft_strcmp(str1, str4));
	printf("Comparando '%s' y '%s' : %d\n", str1, str5, ft_strcmp(str1, str5));

	return (0);
}*/
