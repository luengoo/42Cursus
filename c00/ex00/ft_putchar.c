/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:28:22 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/15 11:24:02 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*int	main(void)
{
	char	c;
	c = "c";

	ft_putchar(c);
	return (0);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
