/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 20:19:52 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/07 11:36:34 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, unsigned long nb)
{
	unsigned long	i;
	unsigned long	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && nb > j)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	src[] = " malo";
	char	dest[] = "Pa tu casa perro";

	printf("%s", ft_strncat(dest, src, 421));
	return (0);
}*/
