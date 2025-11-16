/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:51:28 by alluengo          #+#    #+#             */
/*   Updated: 2025/11/13 17:05:07 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "include/ft_printf/ft_printf.h"
# include "include/libft/libft.h"

typedef struct s_stack_node
{
	int					content;
	int					current_position;
	int					total_values;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;
// FUNCIONES
static void	swap (t_list **head);
void		sa(t_list **stack_a, int checker);
void		sb(t_list **stack_b, int checker);
void		ss(t_list **stack_a, t_list **stack_b, int checker);
static void	push(t_list **dest, t_list **src);
void		pa(t_list **stack_a, t_list **stack_b, int checker);
void		pb(t_list **stack_a, t_list **stack_b, int checker);
static void	rotate(t_list **stack);
void		ra(t_list **stack_a, int checker);
void		rb(t_list **stack_b, int checker);
void		rr(t_list **stack_a, t_list **stack_b, int checker);
int			parse_and_stack(int argc, char **argv, t_list *stack_a);
int			check_and_include(char *str, t_list *stack_a);
int			ft_strchr_plus(char *str);
void		free_all(char **s, size_t len);

#endif