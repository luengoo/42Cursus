/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 13:20:39 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/27 15:28:57 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_argument(char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i])
	{
		write (1, &argv[0][i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	argc = 0;
	print_argument(argv);
	return (0);
}
