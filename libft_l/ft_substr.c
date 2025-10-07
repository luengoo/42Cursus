/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:13:46 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/07 11:37:15 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	ls;
	size_t	sub_len;

	ls = ft_strlen(s);
	if (start >= ls)
		sub_len = 0;
	else if (len > (ls - start))
		sub_len = ls - start;
	else
		sub_len = len;
	new = (char *)malloc((sub_len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		new[i] = s[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
