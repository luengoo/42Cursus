/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 02:31:27 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/25 02:58:43 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	power = power - 1;
	while (power >= 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

/*int	main()
{
	printf("%d", ft_iterative_power(3, 1));
	return (0);
}*/
