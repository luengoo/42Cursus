void    free_all(char **s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

int ft_strchr_plus(char *str)
{
    int	    i;
    int     j;
    char    *searching;

    searching = "0123456789+-";
	i = 0;
	while (str[i])
	{
        j = 0;
        while (str[i] != searching[j] && searching[j])
            j++;
        if (str[i] == searching[j] && str[i + 1] == '\0')
            return (1);
        i++;
	}
	return (0);
}

int check_and_include(char *str, t_list *stack_a)
{
    int     i;
    long    nbr;
    t_list  new;

    while (str[i])
    {
        if (!ft_strchr_plus(str[i]))
            return (0);
        i++;
    }
    nbr = ft_atol(str);
    if (nbr == NULL)
        return (0);
    ft_lstadd_front(stack_a, new)
    stack_a->content = nbr;
}

int parse_and_stack(int argc, char **argv, t_list *stack_a)
{
    long    i;
    long    nbr;
    t_list  new;
    char    **arr;

    if (!ft_strchr(argv, " "))
    {
        if (!ft_strchr_plus(argv[0]));
            return (0);
        nbr = ft_atol(argv[0])
        if (nbr == NULL || (nbr < MIN_INT) || (nbr > MAN_INT))
           return (0);
        stack_a = ft_lstnew(nbr);
    }
    else
    {
        arr = ft_split(argv, " ");
        if (!arr)
            return (0);
        i = 0;
        while (arr[i])
        {
            if (!check_and_include(arr[i], stack_a))
            {
                ft_lstclear(stack_a, free(stack_a));
                return (free_split(arr, i), 0);
            }
            i++;
        }
    }
    return (1);
}