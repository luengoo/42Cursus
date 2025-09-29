/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:48:01 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/24 16:53:46 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strrchr(char *str, int c)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	while (len - 1 > 0)
	{
		if (str[len - 1] == c)
			return (str + len - 1);
		else
			len--;
	}
	return (0);
}

/*int	main()
{
	char	str[] = "Viscai basa  barsa";
	int		c = 'b';
	printf("%s", ft_strrchr(str, c));
	return (0);
}*/