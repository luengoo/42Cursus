/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:46:38 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/18 17:33:04 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	prcnt_value(const char value)
{
	if (value == 'c')
		return (1);
	if (value == 's')
		return (2);
	if (value == 'p')
		return (3);
	if (value == 'd')
		return (4);
	if (value == 'i')
		return (5);
	if (value == 'u')
		return (6);
	if (value == 'x')
		return (7);
	if (value == 'X')
		return (8);
	if (value == '%')
		return (9);
	return (0);
}

int	ft_convert(int	i, va_list *list)
{
	int		j; 
	char	*str;
	//void	*ptr;
	
	j = 0;
	if (i == 1)
		return (ft_putchar_pf(va_arg(*list, int)));
	if (i == 2)
	{
		str = va_arg(*list, char *);
		return (ft_putstr_pf(str));
	}
	/* if (i == 3)
	{
		ptr = va_arg(*list, void *);
		return(i += ft_prntmemory(ptr));
	} */
	if (i == 4)
	{
		j = va_arg(*list, long long);
		return(j = ft_putnbr_pf(i));
	}
	if (i == 5)
	{
		j = va_arg(*list, long long);
		return(j = ft_putnbr_pf(i));
	}
	if (i == 6)
	if (i == 4)
	{
		j = va_arg(*list, long long);
		return(j = (ft_unsigned_pf(i)));
	}
	/*if (i == 7)
	if (i == 8)
	if (i == 8) */
	return (j);
}

int	ft_printf(char const *str, ...)
{
	va_list	list;
	int		i;
	int		len;
	int		ret;
	int		value;

	i = 0;
	ret = 0;
	len = 0;
	va_start(list, str);
	while (str[i])
	{
		while (str[i] != '%')
		{
			if (str[i] == '\0')
				return (ret + len);
			write (1, &str[i], 1);
			i++;
			len++;
		}
		if (!(prcnt_value(str[i + 1])) && str[i + 1])
		{
			write (1, &str[i], 1);
			i++;
			len++;
			write (1, &str[i], 1);
			i++;
			len++;
		}
		else
		{
			i++;
			value = prcnt_value(str[i]);
			ret += ft_convert(value, &list);
			i++;
		}
	}
	return(len + ret);
}

int	main()
{
	int	i;
	i = ft_printf("la conversion se hace a: %c, %s", 'n', "Hello world");
	printf("\n%d", i);
	return (0);
}