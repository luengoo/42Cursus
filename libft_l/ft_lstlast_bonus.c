/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:16:01 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/07 14:50:25 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int	main()
{
	t_list *l;
        t_list *expected;
        t_list *actual;
 
        l = ft_lstnew(ft_strdup("1"));
        l->next = ft_lstnew(ft_strdup("2"));
        l->next->next = ft_lstnew(ft_strdup("3"));
        expected = l->next->next;
        actual = ft_lstlast(l);
        if (actual == expected)
                exit(printf("success"));
        exit(printf("failed"));
} */
