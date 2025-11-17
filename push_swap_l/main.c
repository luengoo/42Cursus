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
	t_stack_node	*stack_a;
	t_stack_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (write(2, "Introduce arguments", 19), 0);
	if (!parse_and_stack(argc, (argv + 1), stack_a))
		return (write (2, "Invalid arguments", 17), 0);
	ft_lstnew(stack_b);
	pa(&stack_a, &stack_b, 0);
	ra(&stack_a, 0);
	sa(&stack_a, 0);
	ft_lstclear_p(&stack_a, (*free));
	ft_lstclear_p(&stack_b, (*free));
	//push_swap(stack_a, stack_b);
	return (0);
}
