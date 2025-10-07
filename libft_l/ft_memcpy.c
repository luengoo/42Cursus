/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:26:52 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/02 16:46:53 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned long	i;
	char			*tmp1;
	char			*tmp2;

	i = 0;
	tmp1 = (char *)dest;
	tmp2 = (char *)src;
	if (dest == 0 && src == 0)
		return (0);
	while (i < count)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (dest);
}
