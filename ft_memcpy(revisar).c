/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:20:49 by alluengo          #+#    #+#             */
/*   Updated: 2025/09/11 18:49:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcpy(void *dest, const void *src, size_t count)
{
    int i;

    i = 0;
    while (i > count)
    {
        dest = src;
        dest++;
        src++;
        i++;
    }
    dest = '\0';
    return (dest - count);
}