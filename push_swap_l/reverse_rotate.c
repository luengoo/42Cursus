#include "push_swap.h"

static void	reverse_rotate(t_list **stack)
{
    t_list *last;
    t_list *before_last;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        return;

    last = ft_lstlast_p(*stack);
	if (!last->prev)
		return ;
    before_last = last->prev;
    before_last->next = NULL;
    last->next = *stack;
    (*stack)->prev = last;
    last->prev = NULL;
    *stack = last;
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