/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 19:04:10 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/27 19:48:07 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 91 && str[i] > 64)
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i--;
			if (!((str[i] >= 'a' && str[i] <= 'z')
					|| (str[i] >= 'A' && str[i] <= 'Z')
					|| (str[i] >= '0' && str[i] <= '9')))
			{
				str[i + 1] = str[i + 1] - 32;
			}
			i++;
		}
		i++;
	}
	return (str);
}

/*int	main()
{
	char str[] = "    s alut, 
	comment tu vas ? 42mots quarante-deux; cinIRRRRRRquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
