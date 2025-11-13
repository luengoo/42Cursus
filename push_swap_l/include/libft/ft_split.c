/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:25:15 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/07 17:57:52 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	words;
	size_t	i;

	i = 0;
	words = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static size_t	word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**free_all(char **s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	size_t	i;
	char	**new;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	new = (char **)malloc((words + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		new[i] = malloc((word_len(s, c) + 1) * sizeof(char));
		if (!new[i])
			return (free_all(new, i));
		ft_strlcpy(new[i], (char *)s, word_len(s, c) + 1);
		s += word_len(s, c);
		i++;
	}
	new[words] = NULL;
	return (new);
}
