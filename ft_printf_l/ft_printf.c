/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:16:35 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/22 18:39:26 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_pointer(unsigned long p)
{
	int	result;
	int	hex;

	result = ft_putstr("0x");
	if (result == -1)
		return (-1);
	hex = ft_putnbr_base(p, "0123456789abcdef", 0);
	if (hex == -1)
		return (-1);
	return (result + hex);
}

int	ft_check(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_hex_pointer(va_arg(args, unsigned long)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int),
				"0123456789abcdef", 0));
	else if (format == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int),
				"0123456789ABCDEF", 0));
	else if (format == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_format(const char *str, va_list list, int *i)
{
	int	count;

	count = 0;
	if (*(str + *i) == '%' && *(str + *i + 1) != '\0')
	{
		(*i)++;
		count = ft_check(*(str + *i), list);
		if (count == -1)
			return (-1);
	}
	else if (*(str + *i) != '%')
	{
		count = ft_putchar(*(str + *i));
		if (count == -1)
			return (-1);
	}
	(*i)++;
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list	list;
	int		i;
	int		count;
	int		res;
	
	i = 0;
	count = 0;
	res = 0;
	va_start(list, str);
	if (str)
	{
		while (*(str + i))
		{
			res = ft_format(str, list, &i);
			if (res == -1)
			{
				va_end(list);
				return (-1);
			}
			count += res;
		}
	}
	va_end(list);
	return (count);
}

#include <stdio.h>

int	main()
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	i = ft_printf("%c, %s, %p, %i, %d, %u, %x, %X, %%\n", 'a', "Hola", &i, -42, -42, -42, 42, 42);
	j = printf("%c, %s, %p, %i, %d, %u, %x, %X, %%\n", 'a', "Hola", &i, -42, -42, -42, 42, 42);
	ft_printf("Numero devuelto de la mia: %d\n", i);
	ft_printf("Numero devuelto de la real: %d\n", i);
}
