#include "push_swap.h"

int	stack_len(t_list *stack)
{
	int	count;

	if (NULL == stack)
		return (0);
	count = 0;
	while (stack)
	{
		++count;
		stack = stack->next;
	}
	return (count);
}

void	set_cheapest(t_list *stack_b)
{
	int		best_match_content;
	t_list	*best_match_node;

	if (stack_b == NULL)
		return ;
	best_match_content = INT_MAX;
	while (stack_b)
	{
		if (stack_b->push_price < best_match_content)
		{
			best_match_content = stack_b->push_price;
			best_match_node = stack_b;
		}
		stack_b = stack_b->next;
	}
	stack_b = best_match_node;
	stack_b->cheapest = true;
}

void	set_target(t_list *stack_a, t_list *stack_b)
{
	t_list	*current_a;
	t_list	*target_node;
	int		best_match_index;

	while (stack_b)
	{
		best_match_index = INT_MAX;
		current_a = stack_a;
		while (current_a)
		{
			if (current_a->content > stack_b->content 
				&& current_a->content < best_match_index)
				{
					best_match_index = current_a->content;
					target_node = current_a;
				}
				current_a = current_a->next;
		}
		if (best_match_index == INT_MAX)
			stack_b->target = find_smallest(stack_a);
		else
			stack_b->target = target_node;
		stack_b = stack_b->next;
	}
}

void	set_price(t_list *stack_a, t_list *stack_b)
{
	int	len_a;
	int	len_b;

	len_a = stack_len(stack_a);
	len_b = stack_len(stack_b);
	while (stack_b)
	{
		stack_b->push_price = stack_b->current_position;
		if (!(stack_b->top_half))
			stack_b->push_price = len_b - (stack_b->current_position);
		if (stack_b->target->top_half)
			stack_b->push_price += stack_b->target->current_position;
		else
			stack_b->push_price += len_a - (stack_b->target->current_position);
		stack_b = stack_b->next;
	}
}

void	set_current_position(t_list *stack)
{
	int	i;
	int	centerline;

	i = 0;
	if (stack == NULL)
		return ;
	centerline = stack_len(stack) / 2;
	while (stack)
	{
		stack->current_position = i;
		if (i <= centerline)
			stack->top_half = true;
		else
			stack->top_half = false;
		stack = stack->next;
		++i;
	}
}