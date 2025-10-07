/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:48:01 by alluengo          #+#    #+#             */
/*   Updated: 2025/09/29 17:33:51 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	if ((unsigned char)c == '\0')
		return (str + len);
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		else
			i++;
	}
	return (0);
}
