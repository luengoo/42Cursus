#include "push_swap.h"

void	finish_rotation(t_list **stack, t_list *top_node, char name)
{
	while (*stack != top_node)
	{
		if (name == 'a')
		{
			if (top_node->top_half)
				ra(stack, false);
			else
				rra(stack, false);
		}
		else if (name == 'b')
		{
			if (top_node->top_half)
				rb(stack, false);
			else
				rrb(stack, false);
		}
	}
}

t_list	*return_cheapest(t_list *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

static void	move_nodes(t_list **stack_a, t_list **stack_b)
{
	t_list	*cheapest_node;

	cheapest_node = return_cheapest(*stack_b);
	if (cheapest_node->top_half && cheapest_node->target->top_half)
		rotate_both(stack_a, stack_b, cheapest_node);
	else if (!(cheapest_node->top_half) && !(cheapest_node->target->top_half))
		reverse_rotate_both(stack_a, stack_b, cheapest_node);
	finish_rotation(stack_b, cheapest_node, 'b');
	finish_rotation(stack_a, cheapest_node->target, 'a');
	pa(stack_a, stack_b, false);
}

void	init_nodes(t_list *stack_a, t_list *stack_b)
{
	set_current_position(stack_a);
	set_current_position(stack_b);
	set_target(stack_a, stack_b);
	set_price(stack_a, stack_b);
	set_cheapest(stack_b);
}

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	t_list	*smallest;
	int		lstlen;

	lstlen = ft_lstsize(*stack_a);
	if (lstlen == 1)
		return ;
	else if (lstlen == 5)
		handle_five(stack_a, stack_b);
	else
	{
		while (lstlen-- > 3)
			pb(stack_a, stack_b, 0);
	}
	small_sort(stack_a);
	while (*stack_b)
	{
		init_nodes(*stack_a, *stack_b);
		move_nodes(stack_a, stack_b);
	}
	set_current_position(*stack_a);
	smallest = find_smallest(*stack_a);
	if (smallest->top_half)
		while (*stack_a != smallest)
			ra(stack_a, 0);
	else
		while (*stack_a != smallest)
			rra(stack_a, 0);
}