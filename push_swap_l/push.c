#include "push_swap.h"

void	push(t_stack_node **dest, t_stack_node **src)
{
	t_stack_node *node_to_push;

	if (*src == NULL)
		return ;
	node_to_push = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	node_to_push->prev = NULL;
	if (*dest == NULL)
	{
		*dest = node_to_push;
		node_to_push->next = NULL;
	}
	else
	{
		node_to_push->next = *dest;
		node_to_push->next->prev = node_to_push;
		*dest = node_to_push;
	}
}

void	pa(t_stack_node **stack_a, t_stack_node **stack_b, int checker)
{
	push(stack_a, stack_b);
	if (!checker)
		ft_printf("pa\n");
}

void	pb(t_stack_node **stack_a, t_stack_node **stack_b, int checker)
{
	push(stack_b, stack_a);
	if (!checker)
		ft_printf("pb\n");
}