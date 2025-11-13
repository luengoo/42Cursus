/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:48:40 by alluengo          #+#    #+#             */
/*   Updated: 2025/11/13 17:32:09 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**arg;
	int		check;
	long	*data;
	
	if (argc == 1 || (argc == 2 && argv[1][0] == 'NULL'))
		return (1);
	if (argc == 2)
	{
		arg = ft_split(*(argv + 1), 32);
		check = arg_parse(arg);
	}
	else
	{
		check = arg_parse(argv + 1);
		arg = argv + 1;
	}
	data = ft_atol(arg);
	if (check == 0)
		return (1);
	else
		push_swap();
	return(0);
}
