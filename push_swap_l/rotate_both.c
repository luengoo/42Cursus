#include "push_swap.h"

void	rotate_both(t_list **stack_a, t_list **stack_b, t_list *cheapest)
{
	while (*stack_a != cheapest->target && *stack_b != cheapest)
		rr(stack_a, stack_b, 0);
	set_current_position(*stack_a);
	set_current_position(*stack_b);
}

void	reverse_rotate_both(t_list **stack_a, t_list **stack_b, t_list *cheapest)
{
	while (*stack_a != cheapest->target && *stack_b != cheapest)
		rrr(stack_a, stack_b, 0);
	set_current_position(*stack_a);
	set_current_position(*stack_b);
}