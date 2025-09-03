/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:02:28 by alluengo          #+#    #+#             */
/*   Updated: 2025/09/01 17:03:31 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	size(int min, int max)
{
	return (max - min - 1);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	temp;

	i = 0;
	temp = size(min, max);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(size(min, max) * sizeof(int));
	if (!range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (temp);
}
/*
int	main (void)
{
	int	*range;
	int	mem;

	mem = ft_ultimate_range(&range, 1, 134);
	printf("%d", mem);
	free (range);
	return (0);
}*/
