/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 20:21:21 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/20 20:38:28 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 123 && str[i] > 96)
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

/*int	main()
{
	char str1[] = "hola mundo!";
	char str2[] = "12345abcXYZ";
	char str3[] = "";
	char str4[] = "ya está en MayÚsculAS";

	printf("Original: %s -> Mayusculas: %s\n", str1, ft_strupcase(str1));
	printf("Original: %s -> Mayusculas: %s\n", str2, ft_strupcase(str2));
	printf("Original: %s -> Mayusculas: %s\n", str3, ft_strupcase(str3));
	printf("Original: %s -> Mayusculas: %s\n", str4, ft_strupcase(str4));
	return (0);
}*/
