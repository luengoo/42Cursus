/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:42:50 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/07 17:29:31 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*int	 main()
{
	 t_list *l;
        int actual;
        int expected;
 
        l = ft_lstnew(ft_strdup("1"));
        l->next = ft_lstnew(ft_strdup("2"));
        l->next->next = ft_lstnew(ft_strdup("3"));
        expected = 3;
        actual = ft_lstsize(l);
        if (actual == expected)
                exit(printf("success"));
        exit(printf("error"));
}*/
