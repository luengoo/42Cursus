/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 12:21:14 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/15 12:25:50 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ralpha;

	ralpha = 'z';
	while (ralpha >= 'a')
	{
		write(1, &ralpha, 1);
		ralpha--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
