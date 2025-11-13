/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:45:02 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/07 11:34:50 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *c, int fd)
{
	unsigned int	i;

	i = 0;
	while (c[i])
	{
		write (fd, &c[i], 1);
		i++;
	}
}

void	ft_putstr_fd(char *s, int fd)
{
	ft_putstr(s, fd);
}
