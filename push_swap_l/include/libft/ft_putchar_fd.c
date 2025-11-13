/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:22:41 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/07 11:34:35 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(int c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putchar_fd(char c, int fd)
{
	ft_putchar(c, fd);
}
