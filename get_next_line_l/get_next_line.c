/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:31:43 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/21 18:32:58 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	prepareandfree(t_list **list)
{
	t_list	*last_node;
	t_list	*new_and_clean;
	int		i;
	int		j;
	char	*buf;

	buf = malloc(BUFFER_SIZE + 1);
	new_and_clean = malloc(sizeof(t_list));
	if (!buf || !new_and_clean)
		return ;
	last_node = ft_lstlast(*list);
	i = 0;
	j = 0;
	while (last_node->str[i] != '\0' && last_node->str[i] != '\n')
		i++;
	while (last_node->str[i] != '\0' && last_node->str[++i])
		buf[j++] = last_node->str[i];
	buf[j] = '\0';
	new_and_clean->str = buf;
	new_and_clean->next = NULL;
	freeall(list, new_and_clean, buf);
}

static int	len_tillnew(t_list *list)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (list)
	{
		i = 0;
		while (list->str[i])
		{
			if (list->str[i] == '\n')
			{
				++len;
				return (len);
			}
			i++;
			len++;
		}
		list = list->next;
	}
	return (len);
}

static void	cpy_str(t_list *lst, char *nextstr)
{
	int	i;
	int	k;

	k = 0;
	if (!lst)
		return ;
	while (lst)
	{
		i = 0;
		while (lst->str[i])
		{
			while (lst->str[i] == '\n')
			{
				nextstr[k] = '\n';
				k++;
				nextstr[k] = '\0';
				return ;
			}
			nextstr[k] = lst->str[i];
			i++;
			k++;
		}
		lst = lst->next;
	}
	nextstr[k] = '\0';
}

static char	*get_line(t_list *lst)
{
	int		strlen;
	char	*nextstr;

	if (!lst)
		return (NULL);
	strlen = len_tillnew(lst);
	nextstr = malloc(strlen + 1);
	if (!nextstr)
		return (NULL);
	cpy_str(lst, nextstr);
	return (nextstr);
}

char	*get_next_line(int fd)
{
	static t_list	*list = NULL;
	char			*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	ft_lstnew(&list, fd);
	if (!list)
		return (0);
	next_line = get_line(list);
	prepareandfree(&list);
	return (next_line);
}

/* #include <stdio.h>

int	main()
{
	char	*line;
	int	fd = open("big_line_with_nl", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		printf("%s", line);
		free (line);
	}
	close(fd);
} */
