/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:23:47 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/07 11:37:12 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*dup;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr((char *)set, s1[start]))
		start++;
	while (s1[start] && (end > start) && ft_strchr((char *)set, s1[end - 1]))
		end--;
	dup = ft_substr(s1, start, (end - start));
	return (dup);
}
