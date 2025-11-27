/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:00:18 by alluengo          #+#    #+#             */
/*   Updated: 2025/11/27 12:00:19 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **dest, t_list **src)
{
	t_list	*node_to_push;

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

void	pa(t_list **stack_a, t_list **stack_b, int checker)
{
	push(stack_a, stack_b);
	if (!checker)
		ft_printf("pa\n");
}

void	pb(t_list **stack_a, t_list **stack_b, int checker)
{
	push(stack_b, stack_a);
	if (!checker)
		ft_printf("pb\n");
}
