#include "push_swap.h"

static void	reverse_rotate(t_list **stack)
{
	t_list	*last;
	int		len;

	len = stack_len(*stack);
	if (NULL == *stack || NULL == stack || 1 == len)
		return ;
	last = ft_lstlast_p(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

void	rra(t_list **stack_a, int checker)
{
	reverse_rotate(stack_a);
	if(!checker)
		ft_printf("rra\n");
}

void	rrb(t_list **stack_b, int checker)
{
	reverse_rotate(stack_b);
	if(!checker)
		ft_printf("rrb\n");
}

void	rrr(t_list **stack_a, t_list **stack_b, int checker)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	if(!checker)
		ft_printf("rrr\n");
}