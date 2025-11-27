/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:07:00 by alluengo          #+#    #+#             */
/*   Updated: 2025/11/27 17:14:46 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_splited(char **splited)
{
	int	i;

	i = 0;
	while (splited[i])
	{
		free (splited[i]);
		i++;
	}
	free (splited);
}

static int	parsing_split(char *str, t_list **stack_a)
{
	int			i;
	char		**splited;
	t_list		*new;
	long long	num;

	splited = ft_split(str, ' ');
	i = 0;
	while (splited[i])
	{
		if (!ft_strchr_plus(splited[i]))
			return (free_splited(splited), free_list(stack_a), 0);
		num = ft_atoll(splited[i]);
		if (num > 2147483647 || num < -2147483648)
			return (free_splited(splited), free_list(stack_a), 0);
		if (!list_searcher(*stack_a, num))
			return (free_splited(splited), free_list(stack_a), 0);
		new = ft_lstnew(num);
		ft_lstadd_back(stack_a, new);
		i++;
	}
	return (free_splited(splited), 1);
}

int	parsing(char *str, t_list **stack_a)
{
	long long	num;
	t_list		*new;

	if (ft_strchr(str, ' '))
		return (parsing_split(str, stack_a));
	if (!ft_strchr_plus (str))
		return (free_list(stack_a), 0);
	num = ft_atoll(str);
	if (num > 2147483647 || num < -2147483648)
		return (free_list(stack_a), 0);
	if (!list_searcher(*stack_a, num))
		return (free_list(stack_a), 0);
	new = ft_lstnew(num);
	ft_lstadd_back(stack_a, new);
	return (1);
}
