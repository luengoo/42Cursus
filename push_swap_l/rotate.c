#include "push_swap.h"

t_list	*ft_lstlast_p(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

static void	rotate(t_list **stack)
{
	t_list	*last_node;

	if (stack == NULL || *stack == NULL)
		return ;
	last_node = ft_lstlast_p(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

void	ra(t_list **stack_a, int checker)
{
	rotate(stack_a);
	if (!checker)
		ft_printf("ra\n");
}

void	rb(t_list **stack_b, int checker)
{
	rotate(stack_b);
	if (!checker)
		ft_printf("rb\n");
}

void	rr(t_list **stack_a, t_list **stack_b, int checker)
{
	rotate(stack_a);
	rotate(stack_b);
	if (!checker)
		ft_printf("rr\n");
}