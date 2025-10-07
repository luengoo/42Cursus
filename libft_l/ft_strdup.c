/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 21:22:06 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/07 11:35:40 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		size;
	char	*cpy;

	i = 0;
	size = ft_strlen(src);
	cpy = (char *)malloc((size + 1) * sizeof(char));
	if (cpy == 0)
		return (0);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
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
