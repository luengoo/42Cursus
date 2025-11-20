/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:48:40 by alluengo          #+#    #+#             */
/*   Updated: 2025/11/13 17:32:09 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void print_stack(t_list *stack, char *name)
// {
//     t_list *current;

//     current = stack;
//     ft_printf("\n=== %s ===\n", name);
//     if (!current)
//     {
//         ft_printf("(vacía)\n");
//         return;
//     }
//     while (current)
//     {
//         ft_printf("%d\n", (long)current->content);
//         current = current->next;
//     }
//     ft_printf("=========\n");
// }

int	main(int argc, char **argv)
{
	int		i;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		i = 1;
		if (!ft_strlen(argv[i]))
			return (0);
		while (argv[i])
		{
			if (parsing(argv[i], &stack_a) == 0)
				return (write(2, "Error", 5), 0);
			i++;
		}
	}
	push_swap(&stack_a, &stack_b);
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	return (0);
}