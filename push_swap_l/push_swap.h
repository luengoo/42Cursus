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
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "include/ft_printf/ft_printf.h"
# include "include/libft/libft.h"

// FUNCIONES
void		pa(t_list **stack_a, t_list **stack_b, int checker);
void		pb(t_list **stack_a, t_list **stack_b, int checker);
int			parsing(char *str, t_list **stack_a);
void		ft_lstadd_front(t_list **lst, t_list *new);
t_list		*ft_lstnew(void *content);
int			list_searcher(t_list *list, long long num);
int			ft_strchr_plus(char *msg);
long long	ft_atoll(const char *nptr);
t_list		*ft_lstlast_p(t_list *lst);
void		ra(t_list **stack_a, int checker);
void		rb(t_list **stack_b, int checker);
void		rr(t_list **stack_a, t_list **stack_b, int checker);
void		sa(t_list **stack_a, int checker);
void		sb(t_list **stack_b, int checker);
void		ss(t_list **stack_a, t_list **stack_b, int checker);
void		rra(t_list **stack_a, int checker);
void		rrb(t_list **stack_b, int checker);
void		rrr(t_list **stack_a, t_list **stack_b, int checker);



#endif