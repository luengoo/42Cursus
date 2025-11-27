/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_both.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:00:23 by alluengo          #+#    #+#             */
/*   Updated: 2025/11/27 12:00:24 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_list **stack_a, t_list **stack_b, t_list *cheapest_node)
{
	while (*stack_a != cheapest_node->target && *stack_b != cheapest_node)
		rr(stack_a, stack_b, 0);
	set_current_position(*stack_a);
	set_current_position(*stack_b);
}

void	re_ro_both(t_list **stack_a, t_list **stack_b, t_list *cheapest_node)
{
	while (*stack_a != cheapest_node->target && *stack_b != cheapest_node)
		rrr(stack_a, stack_b, 0);
	set_current_position(*stack_a);
	set_current_position(*stack_b);
}
