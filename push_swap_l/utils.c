/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:00:37 by alluengo          #+#    #+#             */
/*   Updated: 2025/11/27 12:00:38 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
	new->prev = aux;
}

t_list	*ft_lstnew(long content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

int	list_searcher(t_list *list, long long num)
{
	while (list)
	{
		if ((long long)list->content == num)
			return (0);
		list = list->next;
	}
	return (1);
}

int	ft_strchr_plus(char *msg)
{
	int		i;
	char	*acc_char;

	acc_char = "0123456789";
	i = 0;
	if (msg[i] == '-' || msg[i] == '+')
	{
		if (msg[i + 1] && ft_strchr(acc_char, msg[i + 1]))
			i++;
		else
			return (0);
	}
	while (msg[i])
	{
		if (!ft_strchr(acc_char, msg[i]))
			return (0);
		i++;
	}
	return (1);
}

long long	ft_atoll(const char *nptr)
{
	long long		i;
	long long		sign;
	long long		end;

	i = 0;
	sign = 1;
	end = 0;
	while (nptr[i] != '\0' && (nptr[i] == ' '
			|| (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		end = end * 10 + nptr[i] - '0';
		i++;
	}
	return (end * sign);
}
