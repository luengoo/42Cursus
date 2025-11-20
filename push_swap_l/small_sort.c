#include "push_swap.h"

t_list *find_smallest(t_list *stack)
{
    t_list *smallest;

    if (!stack)
        return (NULL);
    smallest = stack;
    while (stack)
    {
        if (stack->content < smallest->content)
            smallest = stack;
        stack = stack->next;
    }
    return (smallest);
}

t_list *find_highest(t_list *stack)
{
    t_list *highest;

    if (!stack)
        return (NULL);
    highest = stack;
    while (stack)
    {
        if (stack->content > highest->content)
            highest = stack;
        stack = stack->next;
    }
    return (highest);
}

void	small_sort(t_list **stack_a)
{
	t_list	*highest;

	highest = find_highest(*stack_a);
	if (*stack_a == highest)
		ra(stack_a, 0);
	else if ((*stack_a)->next == highest)
		rra(stack_a, 0);
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a, 0);
}