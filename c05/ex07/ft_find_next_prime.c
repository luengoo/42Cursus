/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 21:26:43 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/26 21:47:04 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (nb != i)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}

/*int	main()
{
	printf ("%d", ft_find_next_prime(-15));
	return (0);
}*/
