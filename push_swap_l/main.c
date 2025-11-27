/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:48:40 by alluengo          #+#    #+#             */
/*   Updated: 2025/11/27 17:09:39 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	else if (argc > 1)
	{
		i = 1;
		if (!ft_strlen(argv[i]))
			return (0);
		while (argv[i])
		{
			if (parsing(argv[i], &stack_a) == 0)
				return (write(2, "Error\n", 6), 0);
			i++;
		}
		if (stack_sorted(stack_a))
			return (free_list(&stack_a), 0);
	}
	push_and_free(stack_a, stack_b);
	return (0);
}
