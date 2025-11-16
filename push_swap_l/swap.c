#include "push_swap.h"

static void	swap(t_list **head)
{
	if (*head == NULL || head == NULL)
		return ;
	*head = (*head)->next;
	(*head)->prev->prev = *head;
	(*head)->prev->next = (*head)->next;
	if ((*head)->next)
		(*head)->next->prev = (*head)->prev;
	(*head)->next = (*head)->prev;
	(*head)->prev = NULL;
}

void	sa(t_list **stack_a, int checker)
{
	swap(stack_a);
	if (!checker)
		ft_printf("sa\n");
}

void	sb(t_list **stack_b, int checker)
{
	swap(stack_b);
	if (!checker)
		ft_printf("sb\n");
}

void	ss(t_list **stack_a, t_list **stack_b, int checker)
{
	swap(a);
	swap(b);
	if (!checker)
		ft_printf("ss\n");
}