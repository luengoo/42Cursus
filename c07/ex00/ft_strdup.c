/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 21:22:06 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/28 21:31:32 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	return (cpy);
}

/*int	main()
{
	char	str[50] = "Hola muy buenas";
	char 	*duplicado;

	duplicado = ft_strdup(str);
	printf("El string a copiar es: %s\n", str);
	printf("El string copiado es: %s\n", duplicado);
	free(duplicado);
	return 0;
}*/