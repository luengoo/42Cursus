/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:08:23 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/18 17:33:52 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf(int i)
{
	write (1, &i, 1);
	return (1);
}

int	ft_putstr_pf(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar_pf(str[i]);
		i++;
	}
	return (i);
}

/* int	ft_prntmemory(void	*ptr)
{
	
} */

int	ft_putnbr_pf(long long nb)
{
	long	i;

	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		i++;
		nb = -nb;
		ft_putnbr_pf(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr_pf(nb / 10);
		ft_putnbr_pf(nb % 10);
	}
	else
	{
		nb += 48;
		write(1, &nb, 1);
		i++;
	}
	return (i);
}

int	ft_unsigned_pf(long long nb)
{
	unsigned long	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		ft_putnbr_pf(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr_pf(nb / 10);
		ft_putnbr_pf(nb % 10);
	}
	else
	{
		nb += 48;
		write(1, &nb, 1);
		i++;
	}
	return (i);
}
