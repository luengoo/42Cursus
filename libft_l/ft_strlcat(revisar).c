/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:35:48 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/21 19:16:20 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlcat(char *dest, const char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int k;

    i = 0;
    j = 0;
    k = 0;
    if (size <= 0)
    {
        return (0);
    }
    while (dest[i])
        i++;
    if (i == 0)
        return (0);
    else
    {
        while (src[j])
            j++;
        while(k <= j && i < size)
        {
            dest[i] = src[k];
            i++;
            k++;
        }
        dest[i] = '\0';
    }
    return (i + j + 1);
}