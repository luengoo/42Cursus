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
	void *				content;
	int					current_position;
	int					total_values;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;
// FUNCIONES
void		swap (t_stack_node **head);
void			sa(t_stack_node **stack_a, int checker);
void			sb(t_stack_node **stack_b, int checker);
void			ss(t_stack_node **stack_a, t_stack_node **stack_b, int checker);
void		push(t_stack_node **dest, t_stack_node **src);
void			pa(t_stack_node **stack_a, t_stack_node **stack_b, int checker);
void			pb(t_stack_node **stack_a, t_stack_node **stack_b, int checker);
void		rotate(t_stack_node **stack);
void			ra(t_stack_node **stack_a, int checker);
void			rb(t_stack_node **stack_b, int checker);
void			rr(t_stack_node **stack_a, t_stack_node **stack_b, int checker);
int				parse_and_stack(int argc, char **argv, t_stack_node *stack_a);
int				check_and_include(char *str, t_stack_node *stack_a);
int				ft_strchr_plus(char *str);
void			free_all(char **s, size_t len);
t_stack_node	*ft_lstnew_p(void *content);
void			ft_lstadd_front_p(t_stack_node **lst, t_stack_node *new);
void			ft_lstdelone_p(t_stack_node *lst, void (*del)(void *));
void			ft_lstclear_p(t_stack_node **lst, void (*del)(void *));


#endif