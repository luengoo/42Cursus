/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:48:01 by alluengo          #+#    #+#             */
/*   Updated: 2025/09/29 17:34:18 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	char			*str2;
	char			*to_find2;

	i = 0;
	str2 = (char *)str;
	to_find2 = (char *)to_find;
	if (to_find2[0] == '\0')
		return (str2);
	while (str2[i] && i < n)
	{
		j = 0;
		while (str2[i + j] == to_find2[j] && str2[i + j] && (i + j) < n)
			j++;
		if (to_find2[j] == '\0')
			return (str2 + i);
		i++;
	}
	return (0);
}

/*int	main()
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	to_find[] = "dolor";
	printf("%s", ft_strnstr(str, to_find, 15));
	return (0);
}*/
