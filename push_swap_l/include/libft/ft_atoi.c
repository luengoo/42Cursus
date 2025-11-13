/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:31:11 by alluengo          #+#    #+#             */
/*   Updated: 2025/11/13 17:15:00 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static int	ft_check_overflow(int res)
{
	if (res > 2147483647)
		return (-1);
	if (res == -2147483648)
		return (res);
	if (res < -2147483647)
		return (0);
	return (res);
} */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	neg;
	int	nbr;

	i = 0;
	neg = 1;
	nbr = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		nbr = (nbr * 10) + (nptr[i] - '0');
		i++;
	}
	return (neg * nbr);
}

/* int	main()
{
	char	*nptr;
	nptr = "-2147483648";
	printf("%d\n", ft_atoi(nptr));
	printf("%d", atoi(nptr));
	return (0);
}
 */