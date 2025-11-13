/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:41:22 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/07 11:35:48 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*conc;

	i = 0;
	j = 0;
	conc = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!conc)
		return (0);
	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		conc[i + j] = s2[j];
		j++;
	}
	conc[i + j] = '\0';
	return (conc);
}
