#include "push_swap.h"

bool	stack_sorted(t_list *stack)
{
	if (stack == NULL)
		return (1);
	while (stack->next)
	{
		if (stack->content > stack->next->content)
			return (false);
		stack = stack->next;
	}
	return (true);
}

t_list	*find_smallest(t_list *stack)
{
	int 	smallest;
	t_list	*smallest_node;

	if (stack == NULL)
		return (NULL);
	smallest = INT_MAX;
	while (stack)
	{
		if (stack->content < smallest)
		{
			smallest = stack->content;
			smallest_node = stack;
		}
		stack = stack->next;
	}
	return (smallest_node);
}

static t_list *find_highest(t_list *stack)
{
	int		highest;
	t_list  *highest_node;

	if (stack == NULL)
		return (NULL);
	highest = INT_MIN;
	while (stack)
	{
		if (stack->content > highest)
		{
			highest = stack->content;
			highest_node = stack;
		}
		stack = stack->next;
	}
	return (highest_node);
}

void	small_sort(t_list **stack_a)
{
	t_list	*highest;

	highest = find_highest(*stack_a);
	if (*stack_a == highest)
		ra(stack_a, false);
	else if ((*stack_a)->next == highest)
		rra(stack_a, false);
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a, false);
}

void	handle_five(t_list **a, t_list **b)
{
	while (stack_len(*a) > 3)
	{
		init_nodes(*a, *b);
		finish_rotation(a, find_smallest(*a), 'a');
		pb(a, b, false);
	}
}
