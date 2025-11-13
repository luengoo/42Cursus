/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:35:48 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/07 11:35:07 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main()
{
	char	str1[100] = "Hello";
	char	str2[] = " World";

	printf("Concatenamos: %s en %s ", str2, str1);
	printf("y da de resultado: %s", ft_strcat(str1, str2));
	return (0);
}*/
