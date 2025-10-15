/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:35:34 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/15 17:50:33 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_list
{
	char			*str;
	struct s_list	*next;
}	t_list;

char		*get_next_line(int fd);
void		ft_lstnew(t_list **list, int fd);
void		addtolst(t_list **list, char *buf);
t_list		*ft_lstlast(t_list *lst);
int			find_newline(t_list *lst);
void		freeall(t_list **list, t_list *new_and_clean, char *buf);

#endif
