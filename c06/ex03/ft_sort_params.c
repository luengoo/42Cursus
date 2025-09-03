/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:52:01 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/27 18:50:47 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **str1, char **str2)
{
	char	*c;

	c = *str1;
	*str1 = *str2;
	*str2 = c;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = i + 1;
	while (i < argc - 1)
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
		j = i + 1;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
