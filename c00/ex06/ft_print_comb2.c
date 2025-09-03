/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:49:53 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/19 14:19:49 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(int a, int b)
{
	int	c;

	c = (a / 10) + '0';
	write(1, &c, 1);
	c = (a % 10) + '0';
	write(1, &c, 1);
	write(1, " ", 1);
	c = (b / 10) + '0';
	write(1, &c, 1);
	c = (b % 10) + '0';
	write(1, &c, 1);
	if (a != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	num[2];

	num[0] = 0;
	while (num[0] <= 98)
	{
		num[1] = num[0] + 1;
		while (num[1] <= 99)
		{
			print(num[0], num[1]);
			num[1]++;
		}
		num[0]++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
