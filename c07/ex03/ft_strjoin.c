/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:28:47 by alluengo          #+#    #+#             */
/*   Updated: 2025/09/01 19:24:50 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	sts(char **strs, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			k++;
		}
		i++;
	}
	return (k);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*concat(int size, char **strs, char *sep, char *str)
{
	int		i;
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			str[k] = strs[j][i];
			i++;
			k++;
		}
		i = 0;
		while (sep[i] && j < size - 1)
		{
			str[k] = sep[i];
			i++;
			k++;
		}
		j++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		size_total_seps;
	char	*str;

	if (size == 0)
		return ((char *)malloc(0));
	size_total_seps = (ft_strlen(sep) * size - 1);
	str = (char *)malloc((size_total_seps + sts(strs, size)) * sizeof(char));
	if (!str)
		return (0);
	return (concat(size, strs, sep, str));
}

/*int	main(void)
{
	char	*str[3];

	str[0] = "no puedo";
	str[1] = "no deberia";
	str[2] = "quien lo haria en verdad";
	char	*temp = ft_strjoin(3, str, "porque");
	printf("%s\n", temp);
	free (temp);
	return (0);
}*/