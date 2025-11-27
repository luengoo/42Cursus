/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:02:17 by alluengo          #+#    #+#             */
/*   Updated: 2025/11/27 13:01:59 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_list **stack)
{
	t_list	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

// void	print_stack(t_list *stack, char *name)
// {
// 	t_list	*current;

// 	current = stack;
// 	ft_printf("\n=== %s ===\n", name);
// 	if (!current)
// 	{
// 		ft_printf("(vacía)\n");
// 		return ;
// 	}
// 	while (current)
// 	{
// 		ft_printf("%d\n", (long)current->content);
// 		current = current->next;
// 	}
// 	ft_printf("=========\n");
// }

void	sort_init_move(t_list **stack_a, t_list **stack_b)
{
	small_sort(stack_a);
	while (*stack_b)
	{
		init_nodes(*stack_a, *stack_b);
		move_nodes(stack_a, stack_b);
	}
}

void	push_and_free(t_list *stack_a, t_list *stack_b)
{
	push_swap(&stack_a, &stack_b);
	free_list(&stack_a);
	free_list(&stack_b);
}
