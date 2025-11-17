#include "push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

int	list_searcher(t_list *list, long long num)
{
	while (list)
	{
		if ((long long)list->content == num)
			return (0);
		list = list->next;
	}
	return (1);
}

int	ft_strchr_plus(char *msg)
{
	int		i;
	char	*acc_char;

	acc_char = "0123456789";
	i = 0;
	if (msg[i] == '-' || msg[i] == '+')
	{
		if (msg[i + 1] && ft_strchr(acc_char, msg[i + 1]))
			i++;
		else
			return (0);
	}
	while (msg[i])
	{
		if (!ft_strchr(acc_char, msg[i]))
			return (0);
		i++;
	}
	return (1);
}

long long	ft_atoll(const char *nptr)
{
	long long		i;
	long long		sign;
	long long		end;

	i = 0;
	sign = 1;
	end = 0;
	while (nptr[i] != '\0' && (nptr[i] == ' '
			|| (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		end = end * 10 + nptr[i] - '0';
		i++;
	}
	return (end * sign);
}
