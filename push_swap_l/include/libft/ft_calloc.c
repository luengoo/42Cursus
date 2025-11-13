/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:20:53 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/09 17:54:50 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*tmp;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (0);
	ft_bzero(tmp, nmemb * size);
	return (tmp);
}
