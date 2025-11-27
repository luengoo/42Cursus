/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:00:34 by alluengo          #+#    #+#             */
/*   Updated: 2025/11/27 12:00:35 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **head)
{
	t_list	*first;
	t_list	*second;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	first = *head;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	*head = second;
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
	swap(stack_a);
	swap(stack_b);
	if (!checker)
		ft_printf("ss\n");
}
