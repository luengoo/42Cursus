#include "push_swap.h"

t_stack_node	*ft_lstnew_p(void *content)
{
	t_stack_node	*new_node;

	new_node = malloc(sizeof(t_stack_node));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->content = content;
	return (new_node);
}

void	ft_lstadd_front_p(t_stack_node **lst, t_stack_node *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

void	ft_lstdelone_p(t_stack_node *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}

void	ft_lstclear_p(t_stack_node **lst, void (*del)(void *))
{
	t_stack_node	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone_p(*lst, del);
		*lst = tmp;
	}
}
