#include "push_swap.h"

static void	rotate(t_stack_node **stack)
{
	t_stack_node	*last_node;

	if (stack == NULL || *stack == NULL)
		return ;
	last_node = ft_lstlast(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

void	ra(t_stack_node **stack_a, int checker)
{
	rotate(stack_a);
	if (!checker)
		ft_printf("ra\n");
}

void	rb(t_stack_node **stack_b, int checker)
{
	rotate(stack_b);
	if (!checker)
		ft_printf("rb\n");
}

void	rr(t_stack_node **stack_a, t_stack_node **stack_b, int checker)
{
	rotate(stack_a);
	rotate(stack_b);
	if (!checker)
		ft_printf("rr\n");
}