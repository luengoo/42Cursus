/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-28 19:45:54 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/28 22:17:45 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	size(int min, int max)
{
	return (max - min);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*num;

	if (min >= max)
		return (0);
	num = (int *)malloc(size(min, max) * sizeof(int));
	if (!num)
		return (0);
	i = 0;
	while (min < max)
	{
		num[i] = min;
		min++;
		i++;
	}
	return (num);
}

/*#include <stdio.h>

int main(void)
{
	int min = 10;
	int max = 100;
	int *array;
	int size;
	int	i;

	i = 0;
	array = ft_range(min, max);
	if (!array)
	{
		printf("Error o rango inválido.\n");
		return (1);
	}
	size = max - min;
	printf("Array generado: ");
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	free(array);
	return (0);
}*/
