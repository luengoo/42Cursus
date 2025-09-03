/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 19:49:33 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/28 18:23:39 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				len;
	unsigned int	i;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[len] = '\0';
	return (len);
}

/*int	main()
{
	char	*src = "Buedsadanas";
	char	*dest = "";

	printf("%d", ft_strlcpy(dest, src, 9));
	return (0);
}*/
