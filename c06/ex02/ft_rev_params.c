/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:35:54 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/26 14:57:39 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = argc - 1;
	while (j > 0)
	{
		while (argv[j][i])
		{
			write (1, &argv[j][i], 1);
			i++;
		}
		i = 0;
		write (1, "\n", 1);
		j--;
	}
	return (0);
}
