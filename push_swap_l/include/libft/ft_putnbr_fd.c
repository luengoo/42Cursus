/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:31:01 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/07 11:34:45 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		ft_putnbr(147483648, fd);
	}
	else if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
		ft_putnbr(nb, fd);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, fd);
		ft_putnbr(nb % 10, fd);
	}
	else
	{
		nb += 48;
		write(fd, &nb, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr(n, fd);
}
