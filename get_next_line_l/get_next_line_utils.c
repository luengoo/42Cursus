/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:46:34 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/15 15:53:00 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_lstnew(t_list **list, int fd)
{
	char	*buffer;
	int		char_read;

	while (!find_newline(*list))
	{
		buffer = malloc(BUFFER_SIZE + 1);
		if (NULL == buffer)
			return ;
		char_read = read(fd, buffer, BUFFER_SIZE);
		if (!char_read)
		{
			free(buffer);
			return ;
		}
		buffer[char_read] = '\0';
		addtolst(list, buffer);
	}
}

void	addtolst(t_list **list, char *buf)
{
	t_list	*new_node;
	t_list	*last_node;

	last_node = ft_lstlast(*list);
	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return ;
	if (last_node == NULL)
		*list = new_node;
	else
		last_node->next = new_node;
	new_node->str = buf;
	new_node->next = NULL;
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	find_newline(t_list *lst)
{
	int		i;
	char	*str;

	while (lst != NULL)
	{
		str = lst->str;
		i = 0;
		while (str[i] && i < BUFFER_SIZE)
		{
			if (str[i] == '\n')
				return (1);
			i++;
		}
		lst = lst->next;
	}
	return (0);
}

void	freeall(t_list **list, t_list *new_and_clean, char *buf)
{
	t_list	*tmp;

	if (*list == NULL)
		return ;
	while (*list)
	{
		tmp = (*list)->next;
		free((*list)->str);
		free(*list);
		*list = tmp;
	}
	*list = NULL;
	if (new_and_clean->str[0])
		*list = new_and_clean;
	else
	{
		free(buf);
		free(new_and_clean);
	}
}
