/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:48:01 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/24 16:53:46 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
	if(str[i] == c)
		return (str + i);
	else
		i++;
	}
	return (0);
}

/*int	main()
{
	char	str[] = "Viscai basa  barsa";
	int		c = 'b';
	printf("%s", ft_strchr(str, c));
	return (0);
}*/