/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 03:01:29 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/25 05:54:14 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		return (nb * ft_recursive_power((nb), (power - 1)));
	return (0);
}

/*int	main()
{
	printf("%d", ft_recursive_power(56, 3));
	return (0);
}*/
