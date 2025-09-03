/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 12:39:34 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/15 12:46:05 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	condition;

	if (n < 0)
	{
		condition = 'N';
	}
	else
	{
		condition = 'P';
	}
	write(1, &condition, 1);
}

/*int	main(void)
{
	ft_is_negative(321414);
	return(0);
}*/
