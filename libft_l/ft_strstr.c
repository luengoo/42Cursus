/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:48:01 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/24 16:53:46 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

/*int	main()
{
	char	str[] = "Viscai basa  barsa";
	char	to_find[] = "basa";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
