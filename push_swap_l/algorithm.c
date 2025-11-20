#include "push_swap.h"

void	finish_rotation(t_list **stack, t_list *top_node, char name)
{
	while (*stack != top_node)
	{
		if (name == 'a')
		{
			if (top_node->top_half)
				ra(stack, 0);
			else
				rra(stack, 0);
		}
		else if (name == 'b')
		{
			if (top_node->top_half)
				rb(stack, 0);
			else
				rrb(stack, 0);
		}
	}
}

t_list	*return_cheapest(t_list *stack)
{
	while (stack)
	{
		if (stack->cheapest == 1)
			return (stack);
		stack = stack->next;
	}
	return (0);
}

static void	move_nodes(t_list **stack_a, t_list **stack_b)
{
	t_list	*cheapest;

	cheapest = return_cheapest(*stack_b);
	if (cheapest->top_half && cheapest->target->top_half)
		rotate_both(stack_a, stack_b, cheapest);
	else if (!(cheapest->top_half) && !(cheapest->target->top_half))
		reverse_rotate_both(stack_a, stack_b, cheapest);
	finish_rotation(stack_b, cheapest, 'b');
	finish_rotation(stack_a, cheapest->target, 'a');
	pa(stack_a, stack_b, 0);
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
	while (lstlen-- > 3)
		pb(stack_b, stack_a, 0);
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