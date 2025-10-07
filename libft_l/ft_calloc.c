/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:20:53 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/07 11:33:22 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tmp;
	int		i;

	tmp = (char *)malloc(nmemb * size);
	i = 0;
	if (nmemb == 0 || size == 0)
		return (tmp);
	if (!tmp)
		return (0);
	while (tmp[i])
	{
		tmp[i] = '\0';
		i++;
	}
	return (tmp);
}
