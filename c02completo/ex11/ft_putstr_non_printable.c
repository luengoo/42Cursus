/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:16:22 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/28 18:17:10 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(int i)
{
	char	*hexad;
	int		temp;
	int		temp2;

	hexad = "0123456789abcdef";
	temp2 = i % 16;
	temp = i / 16;
	write(1, "\\", 1);
	write(1, &hexad[temp], 1);
	write(1, &hexad[temp2], 1);
}

void	putchar(char str)
{
	write (1, &str, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 31 && str[i] < 127)
			putchar(str[i]);
		else
			hexa(str[i]);
		i++;
	}
}

/*int	main ()
{
	char str[20] = "ab, c\nd, e\tf, g\rh";
	ft_putstr_non_printable(str);
	return 0;
}*/
